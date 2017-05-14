#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char **argv) {
  char s[10];
  strcpy(s,"0123456789abcdef");
  printf("s=%s\n",s);
  return 0;
}
