#include <stdio.h>
int main() {
  int N, A[50], B[50], i, points[50];
  scanf("%d", &N);
  for(i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }
  for(i = 0; i < N; i++){
    scanf("%d", &B[i]);
  }
  for(i = 0; i < N; i++){
    points[i] = A[i]*20 - B[i]*10;
  }
  for(i = 0; i < N; i++) {
    if (points[0] < points[i]){
      points[0] = points[i];
    }
  }
  printf("%d\n", points[0]);
  return 0;
}
