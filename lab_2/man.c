#include <stdio.h>

double c_to_f(double celsius) { return (celsius * 9.0 / 5.0) + 32; }

double f_to_c(double fahrenheit) { return (fahrenheit - 32) * 5.0 / 9.0; }

int main() {
  char choise;
  double temperature;
  do {
    printf("[+] choose the conversion direction:\n");
    printf("1. celsius to fahrenheit\n");
    printf("2. fahrenheit to celsius \n");
    printf("3. exit the program \n");
    scanf(" %c", &choise);
    if (choise == '1') {
      printf("[+] enter the temperature in celsius: \n");
      scanf(" %lf", &temperature);
      double res = c_to_f(temperature);
      printf("temperature in fahrenheit: %.2lf", res);
    } else if (choise == '2') {
      printf("[+] enter the temperature in fahrenheit: \n");
      scanf(" %lf", &temperature);
      double res = f_to_c(temperature);
      printf("temperature in celsius: %.2lf", res);
    } else if (choise == '3') {
      printf("\nprogram has been exited");
      break;
    } else {
      printf("\n[!] invalid input, please try again");
    }
    printf("\n[?] do u wanna continue? (y/n)\n");
    scanf(" %c", &choise);
  } while (choise == 'y' || choise == 'Y');
  return 0;
}
