#include <stdio.h>

int main() {
  int month;

  printf("[?] please enter the month number (1-12): ");
  scanf("%d", &month);

  switch (month) {
    case 12: case 1: case 2:
      printf("[+] it's winter\n");
      break; 
    case 3: case 4: case 5:
      printf("[+] it's spring\n");
      break;
    case 6: case 7: case 8:
      printf("[+] it's summer\n");
      break;
    case 9: case 10: 
      printf("[+] it's autumn\n");
      break;
  default:
      printf("[!] invalid month number\n[!] please enter a number between 1 and 12\n");
      break;
  }

  return 0;
}
