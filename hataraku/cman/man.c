#include <stdio.h>

int main() {
  double total_loan_amount;
  double monthly_payment;
  double interest_rate = 0.0005;
  int months = 0;
  double min_payment = 0;
  double max_payment = 0;
  double extra_payment = 0;

  printf("[+] enter the total loan amount (X): ");
  if (scanf("%lf", &total_loan_amount) != 1 || total_loan_amount <= 0) {
    printf("[-] invalid total loan amount\n");
    return 1;
  }

  double remaining_loan_amount = total_loan_amount;

  while (remaining_loan_amount > 0) {
    double interest_payment = remaining_loan_amount * interest_rate;

    printf("[!] interest payment: %.5lf\n", interest_payment);

    printf("[+] enter the amount of the next payment: ");
    if (scanf("%lf", &monthly_payment) != 1 || monthly_payment < 0) {
      printf("[ERROR] payment amount must be a positive number\n");
      continue;
    }

    double min_required_payment = interest_payment;

    if (monthly_payment < min_required_payment) {
      printf("[WARNING] the loan amount increased BECAUSE the paid amount is "
             "less than the interest payment\n");
      remaining_loan_amount += interest_payment;
    } else {
      remaining_loan_amount -= monthly_payment;

      if (min_payment == 0 || monthly_payment < min_payment) {
        min_payment = monthly_payment;
      }
      if (monthly_payment > max_payment) {
        max_payment = monthly_payment;
      }

      months++;
    }

    printf("[!] remaining loan amount: %.4lf\n", remaining_loan_amount);
  }

  printf("[!] the person can pay off the loan in %d months.\n", months);
  printf("[!] month and min payment: %d month, %.2lf grn\n", months,
         min_payment);
  printf("[!] month and max payment: %d month, %.2lf grn\n", months,
         max_payment);

  if (extra_payment > 0) {
    printf("[!] extra payment returned: %.4lf grn\n", extra_payment);
  }

  return 0;
}
