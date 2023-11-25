#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 10

int calculateGrayscale(int r, int g, int b) {
  return (int)(0.2126 * r + 0.7152 * g + 0.0722 * b);
}

void applyMedianFilter(int input[N][M], int output[N][M]) {
  int window[9];
  int i, j, k, l, index, temp;

  for (i = 1; i < N - 1; i++) {
    for (j = 1; j < M - 1; j++) {
      index = 0;
      for (k = i - 1; k <= i + 1; k++) {
        for (l = j - 1; l <= j + 1; l++) {
          window[index++] = input[k][l];
        }
      }

      for (k = 0; k < 9 - 1; k++) {
        for (l = 0; l < 9 - k - 1; l++) {
          if (window[l] > window[l + 1]) {
            temp = window[l];
            window[l] = window[l + 1];
            window[l + 1] = temp;
          }
        }
      }

      output[i][j] = window[4];
    }
  }
}

int main() {
  int rgbImage[N][M][3];
  int grayscaleImage[N][M];
  int i, j;

  srand(time(NULL));

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      rgbImage[i][j][0] = rand() % 256; // Red
      rgbImage[i][j][1] = rand() % 256; // Green
      rgbImage[i][j][2] = rand() % 256; // Blue
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      grayscaleImage[i][j] = calculateGrayscale(
          rgbImage[i][j][0], rgbImage[i][j][1], rgbImage[i][j][2]);
    }
  }

  int filteredImage[N][M];
  applyMedianFilter(grayscaleImage, filteredImage);

  return 0;
}
