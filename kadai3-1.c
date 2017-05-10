#include <stdio.h>
#include <string.h>

int main(int argc,char **argv) {
  int i;
  char s[100],t[100];
  for(i=0;i<2;i++){
    if(i==0){
      strcpy(s,"program");
    }
    if(i==1){
      strcpy(s,"pr");
    }
    strcpy(t,"program");
    printf("s=\"%s\",t =\"%s\"の時:\n",s,t);
    printf("strcmp(s,t)=%5d\n",strcmp(s,t));
    printf("strcmp(t,s)=%5d\n",strcmp(t,s));
    strcpy(t,"pro");
    printf("s=\"%s\",t=\"%s\"の時:\n",s,t);
    printf("strcmp(s,t)=%5d\n",strcmp(s,t));
    printf("strcmp(t,s)=%5d\n",strcmp(t,s));
    strcpy(t,"pro m");
    printf("s=\"%s\",t=\"%s\"の時:\n",s,t);
    printf("strcmp(s,t)=%5d\n",strcmp(s,t));
    printf("strcmp(t,s)=%5d\n",strcmp(t,s));
    strcpy(t,"pr");
    printf("s=\"%s\",t=\"%s\"の時\n",s,t);
    printf("strcmp(s,t)=%5d\n",strcmp(s,t));
    printf("strcmp(t,s)=%5d\n",strcmp(t,s));
    strcpy(t,"problem");
    printf("s=\"%s\",t=\"%s\"の時\n",s,t);
    printf("strcmp(s,t)=%5d\n",strcmp(s,t));
    printf("strcmp(t,s)=%5d\n",strcmp(t,s));
  }
  return 0;
}
