#include <stdio.h>
#include <string.h>

int main(int argc,char **argv) {
  char s[10],t[10];
  int a,b;
  strcpy(s,"130");
  strcpy(t,"1.56");
  a=atoi(s);
  b=atof(t);
  printf("atoi(%s)=%d,atof(%s)=%d\n",s,a,t,b);
}
