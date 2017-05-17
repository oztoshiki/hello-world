#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv) {
  int a;
  double b;
  char s[1000];

  printf("整数を入力してください。\n");
  fgets(s,sizeof(s),stdin);
  a=atoi(s);

  printf("小数を入力してください。\n");
  fgets(s,sizeof(s),stdin);
  b=atof(s);

  printf("int型からchar型への変換は、\"%d\"から\"%c\"\n",a,(char)a);
  printf("double型からfloat型への変換は、\"%lf\"から\"%f\"\n",b,(float)b);
  return 0;
}
