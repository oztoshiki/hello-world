#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv) {
  int a;
  short b;
  double c;
  float d;
  char e,s[1000],*endptr;
  long f;
  long long g;
  long double h;


  printf("整数を入力してください。\n");
  fgets(s,sizeof(s),stdin);
  a=atoi(s);
  b=(short)atoi(s);
  f=atol(s);
  g=atoll(s);
  e=(char)atoi(s);

  printf("小数を入力してください。\n");
  fgets(s,sizeof(s),stdin);
  c=atof(s);
  d=strtof(s,&endptr);
  h=strtold(s,&endptr);

  printf("\nint型からchar型への変換は、\"%d\"から\"%d\"\n",a,(char)a);
  printf("int型からshort型への変換は、\"%d\"から\"%d\"\n",a,(short)a);
  printf("int型からlong型への変換は、\"%d\"から\"%ld\"\n",a,(long)a);
  printf("int型からlong long型への変換は、\"%d\"から\"%lld\"\n\n",a,(long long)a);

  printf("char型からint型への変換は、\"%d\"から\"%d\"\n",e,(int)e);
  printf("char型からshort型への変換は、\"%d\"から\"%d\"\n",e,(short)e);
  printf("char型からlong型への変換は、\"%d\"から\"%ld\"\n",e,(long)e);
  printf("char型からlong long型への変換は、\"%d\"から\"%lld\"\n\n",e,(long long)e);

  printf("short型からchar型への変換は、\"%d\"から\"%d\"\n",b,(char)b);
  printf("short型からint型への変換は、\"%d\"から\"%d\"\n",b,(int)b);
  printf("short型からlong型への変換は、\"%d\"から\"%ld\"\n",b,(long)b);
  printf("short型からlong long型への変換は、\"%d\"から\"%lld\"\n\n",b,(long long)b);

  printf("long型からchar型への変換は、\"%ld\"から\"%d\"\n",f,(char)f);
  printf("long型からshort型への変換は、\"%ld\"から\"%d\"\n",f,(short)f);
  printf("long型からint型への変換は、\"%ld\"から\"%d\"\n",f,(int)f);
  printf("long型からlong long型への変換は、\"%ld\"から\"%lld\"\n\n",f,(long long)f);

  printf("long long型からchar型への変換は、\"%lld\"から\"%d\"\n",g,(char)g);
  printf("long long型からshort型への変換は、\"%lld\"から\"%d\"\n",g,(short)g);
  printf("long long型からint型への変換は、\"%lld\"から\"%d\"\n",g,(int)g);
  printf("long long型からlong型への変換は、\"%lld\"から\"%ld\"\n\n",g,(long)g);

  printf("double型からfloat型への変換は、\"%lf\"から\"%f\"\n",c,(float)c);
  printf("double型からlong double型への変換は、\"%lf\"から\"%Lf\"\n\n",c,(long double)c);

  printf("float型からdouble型への変換は、\"%f\"から\"%lf\"\n",d,(double)d);
  printf("float型からlong double型への変換は、\"%f\"から\"%Lf\"\n\n",d,(long double)d);

  printf("long double型からdouble型への変換は、\"%Lf\"から\"%lf\"\n",h,(double)h);
  printf("long double型からfloat型への変換は、\"%Lf\"から\"%f\"\n\n",h,(float)h);

  return 0;
}
