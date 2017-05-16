#include <stdio.h>

int main(int argc,char **argv) {
  char s[50];
  
  printf("名前を入力してください.\n");
  scanf("%[^\n]",s);
  printf("入力された名前は%sです.\n",s);
  return 0;
}
