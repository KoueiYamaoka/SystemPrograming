#include <stdio.h>

int main(void)
{
  int x, y;

  printf("input number ");
  scanf("%d", &y);

  do{
    x = y % 10;
    y = y / 10;

    printf("%d", x);
  }while (y > 0);

  printf("\n");

  return 0;
}
