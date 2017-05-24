#include <stdio.h>
#include <math.h>

int main(int argc,char **argv) {
  int a;
  char s[15];
  printf("数を入力してください.\n");
  fgets(s,sizeof(s),stdin);
  a=atoi(s);
  if(a%2==0 && (a<10 || a>20)){
    printf("成功!\n");
  }
  else{
    printf("失敗!\n");
  }
  return 0;
}
