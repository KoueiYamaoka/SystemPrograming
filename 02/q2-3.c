#include <stdio.h>
#include <string.h>

#define NUMBER 20 /* number of student */
#define NAME_SIZE 20 /* number of charactor */

typedef struct{
  char name[NAME_SIZE];
  int point;
} student;

void swap(student *x, student *y){
  student tmp = *x;
  *x = *y;
  *y = tmp;
}


/* bubble sorting */
void sort(student data[], int n){
  int k = n - 1;
  while(k >= 0){
    int a, b;
    for(a = 1, b = -1; a <= k; a++){
      if(data[a - 1].point > data[a].point){
	b = a - 1;
	swap(&data[a], &data[b]);
      }
    }
    k = b;
  }
}

int main(int argc, char *argv[])
{
  FILE *fp;
  student std[NUMBER];
  int i;
  int j = 0;
  
   if (argc != 2) {
    printf("missing file argument\n");
    return 1;
  }
  
  fp = fopen(argv[1], "r");
  if(fp == NULL){
    puts("error");
    return 1;
  }

  while (fscanf(fp, "%s%d", std[j].name, &std[j].point) == 2){
    j++;
  }

  sort(std, NUMBER);

  for(i = 0; i < NUMBER; i++)
    printf("%s %d \n", std[i].name, std[i].point);
  return 0;
}
