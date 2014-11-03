#include <stdio.h>

int main(void)
{
  char str1[100], str2[100], str3[100];
  int i, j, k;

  printf("input string1 ");
  scanf("%s", str1);

  printf("input string2 ");
  scanf("%s", str2);

  i = 0;
  j = 0;
  k = 0;
  while (str1[i] != '\0') {
    while (str2[j] != '\0') {
      if (str1[i] == str2[j]) {
	str3[k] = str1[i];
	k++;
	break;
      }
      j++;
    }
    j = 0;
    i++;
  }
  str3[k] = '\0';

  printf("output string = %s\n", str3);

  return 0;
}
