#include <stdio.h>

int main(void)
{
  int n, tmp;
  int digit;           /* 桁数 */

  printf("input number ");
  scanf("%d", &n);

  tmp = n;
  digit = 0;

  do {
    tmp /= 10;
    digit++;
  } while (tmp > 0);

  printf("%d is the %d-digit number\n", n, digit);

  return 0;
}
