
#include <stdio.h>

int main(int argc, char *argv[])
{
  int ch, count;
  FILE *fp;

  /* コマンドライン引数が1つ指定されているかどうか確認する */
  if (argc != 2) {
    printf("missing file argument\n");
    return 1;
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {   /* ファイルのオープン */
    printf("can't open %s\n", argv[1]);
    return 1;
  }

  count = 0;
  while ((ch = fgetc(fp)) != EOF) /* 1文字ずつ読み込む */
      count++;
  
  printf("%d characors\n", count);
  fclose(fp);     /* ファイルのクローズ */

  return 0;
}
