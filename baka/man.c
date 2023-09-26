#include <math.h>
#include <stdio.h>

int main() {
  double a, b, t, x, y;
  printf("[+] enter the coefficients of the equation (a, b, t): ");
  scanf("%lf %lf %lf", &a, &b, &t);
  if (a < 0 || b < 0 || t < 0) {
    printf("[ERR] -> coefficients must be non-negative.\n");
    return 1;
  }
  printf("[+] enter the value of x: ");
  scanf("%lf", &x);
  if (x < 0) {
    printf("[ERR] -> x must be non-negative.\n");
    return 1;
  }
  y = (a * t + b * (x + sin(x))) / (x * x + 2 * x + 5);
  printf("the value of y is %lf.\n", y);
  return 0;
}
