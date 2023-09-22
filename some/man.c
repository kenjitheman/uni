#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  //  int arrman[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  //  int to_search;
  //  printf("Enter a number to search: ");
  //  scanf("%d", &to_search);
  //
  //  int found = 0;
  //
  //  for (int i = 0; i < 11; i++) {
  //    if (arrman[i] == to_search) {
  //      printf("Found %d at index %d\n", to_search, i);
  //      found = 1;
  //      break;
  //    }
  //  }
  //
  //  if (!found) {
  //    printf("%d not found in the array.\n", to_search);
  //  }
  //
  // int matrix [2][3] = {
  // 	{ 2, 3, 4 },
  // 	{ 4, 5, 3,},
  // };
  //
  // for (int i = 0; i < 2; i++) {
  // 	for (int j = 0; j < 3; j++) {
  // 		printf("%d ", matrix[i][j]);
  // 	}
  // 	printf("\n");
  // }

  // struct man {
  //   int age;
  //   char name[20];
  //   float height;
  //   float weight;
  //   char gender;
  //   char occupation[20];
  //   char occupation2[20];
  // };
  //
  // struct man m;

  // for (int i = 0; i < 100; i++) {
  //   printf("%d\n", i);
  // }
  printf("waiting for %d seconds...\n", 1);

  for (int i = 0; i < 100; i++) {
    sleep(1);
    printf("%d\n", i);
  }

  return 0;
}
