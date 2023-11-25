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
    printf("[+] input %d payment: ", months + 1);
    if (scanf("%lf", &monthly_payment) != 1 || monthly_payment < 0) {
      printf("[-] invalid payment amount\n");
      continue;
    }

    double min_required_payment = interest_payment;

    if (monthly_payment < min_required_payment) {
      printf("[ ! ] you paid less than the minimum payment\n");
      printf("[ ? ] the NEW debt is %.4lf.\n", remaining_loan_amount);
      printf("[ ? ] the next minimum payment is %.4lf\n", interest_payment);
    }

    remaining_loan_amount -= monthly_payment;

    if (min_payment == 0 || monthly_payment < min_payment) {
      min_payment = monthly_payment;
    }
    if (monthly_payment > max_payment) {
      max_payment = monthly_payment;
    }

    months++;
    printf("[?] your debt is %.5lf\n", remaining_loan_amount);
  }

  if (remaining_loan_amount < 0) {
    extra_payment = -remaining_loan_amount;
  }

  if (extra_payment > 0) {
    printf("[EXTRA PAYMENT] %.5lf UAH returned\n", extra_payment);
  }

  printf("[?] loan repaid in %d payments\n", months);
  printf("[MIN] Payment is %.5lf UAH\n", min_payment);
  printf("[MAX] Payment is %.2lf UAH\n", max_payment);

  return 0;
}
