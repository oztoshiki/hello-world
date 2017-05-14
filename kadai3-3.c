#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char **argv) {
  char s[10],t[10];
  int a;
  double b;
  strcpy(s,"130");
  strcpy(t,"0.0342");
  a=atoi(s);
  b=atof(t);
  printf("atoi(%s)=%d,atof(%s)=%f\n",s,a,t,b);
}
