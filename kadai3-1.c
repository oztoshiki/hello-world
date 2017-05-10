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
    printf("%d\n",strcmp(s,t));
    printf("%d\n",strcmp(t,s));
    strcpy(t,"pro");
    printf("%d\n",strcmp(s,t));
    printf("%d\n",strcmp(t,s));
    strcpy(t,"pro m");
    printf("%d\n",strcmp(s,t));
    printf("%d\n",strcmp(t,s));
    strcpy(t,"programprogram");
    printf("%d\n",strcmp(s,t));
    printf("%d\n",strcmp(t,s));
    strcpy(t,"problem");
    printf("%d\n",strcmp(s,t));
    printf("%d\n",strcmp(t,s));
  }
  return 0;
}
