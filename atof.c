#include <stdio.h>
#include <string.h>

int main(int argc,char **argv) {
  const char string[]=" -1.02857e+2 \260C";
  const double z= atof(string);
  printf("\"%s\" becomes %.2f\n",string,z);
}
