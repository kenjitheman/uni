#include <stdio.h>

#define N 4

int main() {
  int earnings[N] = {100, 150, 200, 120};
  int expenses[N] = {80, 100, 120, 90};
  int borrowing[N] = {10, 0, 30, 0};

  int total_accumulated_money = 0;
  int biggest_tranjira = 0;
  int better_average_balance = 0;
  int borrowed_money_flag = 0;
  int money_left;

  for (int week = 0; week < N; week++) {
    money_left = earnings[week] - expenses[week];

    total_accumulated_money += money_left;

    if (borrowing[week] > 0) {
      borrowed_money_flag = 1;
    }
    if (total_accumulated_money > earnings[biggest_tranjira]) {
      biggest_tranjira = week;
    }
    if (week == 0 || total_accumulated_money / (week + 1) >
        total_accumulated_money / better_average_balance) {
      better_average_balance = week + 1;
    }
  }

  printf("[?] total money accumulated in the treasury for %d weeks: %d\n", N, total_accumulated_money);
  printf("[?] the biggest tranjira is person %d\n", biggest_tranjira + 1);
  printf("[?] person %d has the better average balance\n", better_average_balance);
  printf("[?] %s\n", borrowed_money_flag ? "someone had to borrow money from their parents at least once\n" 
      : "no one had to borrow money from their parents\n");

  for (int i = 0; i < N; i++) {
    printf("\n[?] person %d: \n [+] earnings: %d \n [+] expenses: %d \n [+] borrowing: %d\n", i, earnings[i], expenses[i], borrowing[i]);
  }

  return 0;
}
