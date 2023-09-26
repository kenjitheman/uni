#include <stdio.h>

int main() {
  int N;
  printf("[+] enter the number of packages: ");
  scanf("%d", &N);

  double requiredNetWeights[N];
  double realNetWeights[N];

  for (int i = 0; i < N; i++) {
    printf("[+] enter the required net weight for package %d (in grams): ",
           i + 1);
    scanf("%lf", &requiredNetWeights[i]);

    printf("[+] enter the real net weight for package %d (in grams): ", i + 1);
    scanf("%lf", &realNetWeights[i]);
  }

  double shortages[N];
  int packagesWithShortages[N];
  int numPackagesWithShortages = 0;

  double totalShortageWeight = 0.0;
  for (int i = 0; i < N; i++) {
    shortages[i] = requiredNetWeights[i] - realNetWeights[i];
    if (shortages[i] > 0) {
      packagesWithShortages[numPackagesWithShortages] = i + 1;
      numPackagesWithShortages++;
    }
    totalShortageWeight += shortages[i];
  }

  printf("\n[?] shortage information:\n");
  for (int i = 0; i < N; i++) {
    printf("[+] package %d - shortage: %.3lf grams\n", i + 1, shortages[i]);
  }

  printf("\n[+] packages with shortages: ");
  for (int i = 0; i < numPackagesWithShortages; i++) {
    printf("%d", packagesWithShortages[i]);
    if (i < numPackagesWithShortages - 1) {
      printf(", ");
    }
  }
  printf("\n");

  printf("[?] total weight of shortage: %.3lf grams\n", totalShortageWeight);

  return 0;
}
