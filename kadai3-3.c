#include <stdio.h>
#include <string.h>

int main(int argc,char **argv) {
  char s[10],t[10];
  int a;
  double b;
  strcpy(s,"130");
  strcpy(t,"-");
  a=atoi(s);
  b=atof(t);
  printf("atoi(%s)=%d,atof(%s)=%f\n",s,a,t,b);
}
