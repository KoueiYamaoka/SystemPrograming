#include <stdio.h>

#define N 100

int main(void)
{
  double a[N][N], b[N][N], tmp;
  int i, j, k, n;

  printf("input matrix size\n");
  scanf("%d", &n);

  for (j = 0; j < n; j++) {
    for (i = 0; i < n+1; i++) {
      a[j][i] = 0.0;
      b[j][i] = 0.0;
    }
  }

  for (j = 0; j < n; j++) {
    for (i = 0; i < n+1; i++) {
      scanf("%lf", &a[j][i]);
    }
  }

  for (i = 0; i < n; i++){
    b[i][i] = 1.0;
    b[i][n] = a[i][n];
  }

  for (k = 0; k < n; k++) {
    tmp = a[k][k];
    for (i = 0; i < n+1; i++) {
      a[k][i] /= tmp;
      b[k][i] /= tmp;
    }
    for (j = 0; j < n; j++) {
      if (j != k) {
        tmp = a[j][k];
        for (i = 0; i < n+1; i++) {
          a[j][i] -= a[k][i] * tmp;
          b[j][i] -= b[k][i] * tmp;
        }
      }
    }
  }

  for (j = 0; j < n; j++) {
      printf("%f\n", b[j][n]);
    }


  return 0;
}
