#include <math.h>
#include <stdio.h>

struct Point {
  double x;
  double y;
};

// fn to calculate the distance from a point to the origin
double distanceToOrigin(struct Point p) {
	return sqrt(p.x * p.x + p.y * p.y);
}

// fn to find and print points closest to the origin
void findClosestPoints(struct Point points[], int N) {
  double minDistance = distanceToOrigin(points[0]);

  printf("[+] closest points to the origin:\n");

  for (int i = 0; i < N; i++) {
    double distance = distanceToOrigin(points[i]);

    if (distance < minDistance) {
      minDistance = distance;
    }
  }

  for (int i = 0; i < N; i++) {
    double distance = distanceToOrigin(points[i]);

    if (distance == minDistance) {
      printf("[?] point (%.2lf, %.2lf)\n", points[i].x, points[i].y);
    }
  }
}

// fn to calculate the total length of the broken line
double calculateTotalLength(struct Point points[], int N) {
  double totalLength = 0.0;

  for (int i = 1; i < N; i++) {
    double dx = points[i].x - points[i - 1].x;
    double dy = points[i].y - points[i - 1].y;
    totalLength += sqrt(dx * dx + dy * dy);
  }

  return totalLength;
}

int main() {
  int N;
  printf("[+] enter the number of points: ");
  scanf("%d", &N);

  // declare an array of points
  struct Point points[N];

  // input coordinates for each point
  for (int i = 0; i < N; i++) {
    printf("[+] enter coordinates for point %d (x y): ", i + 1);
    scanf("%lf %lf", &points[i].x, &points[i].y);
  }

  findClosestPoints(points, N);

  double totalLength = calculateTotalLength(points, N);
  printf("[?] total length of the broken line: %.2lf\n", totalLength);

  return 0;
}
