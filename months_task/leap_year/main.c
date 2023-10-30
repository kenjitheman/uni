#include <stdbool.h>
#include <stdio.h>

bool isLeapYear(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int year, month;

  printf("[+] enter the year: ");
  scanf("%d", &year);

  printf("[+] enter the month (1-12): ");
  scanf("%d", &month);

  if (month < 1 || month > 12) {
    printf("[+] invalid month input\nplease enter a number between 1 and 12");
    return 1;
  }

  int days;
  switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      days = 31;
      break;
    case 4: case 6: case 9: case 11:
      days = 30;
      break;
    case 2:
      if (isLeapYear(year)) {
        days = 29;
      } else {
        days = 28;
      }
      break;
  }

  printf("[+] there are %d days in month %d of year %d\n", days, month, year);

  return 0;
}
