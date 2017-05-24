#include <stdio.h>
#include <math.h>

int main(int argc,char **argv) {
  int a,which[13];
  char s[15];
  printf("条件１:a％2==0,条件2:a％3==0,条件3:a％5==0\n");
  printf("数字を入れるとき、0を入れると終了します.\n");
  while(1){
    printf("数字を入力してください.\n");
    fgets(s,sizeof(s),stdin);
    a=atoi(s);
    if(a==0){
      break;
    }
    for(int i=0;i<13;i++){
      which[i]=0;
    }
    if(a%2==0){
      which[0]=1;
    }
    if(a%3==0){
      which[1]=1;
    }
    if(a%5==0){
      which[2]=1;
    }
    printf("条件1:%d,条件2:%d,条件3:%d\n以下の条件でOK\n",which[0]==1,which[1]==1,which[2]==1);
    if(which[0]==1 && which[1]==1 || which[2]==1){
      printf("条件1 && 条件2 || 条件3\n");
      which[3]=1;
    }
    if(which[0]==1 && (which[1]==1 || which[2]==1)){
      printf("条件1 && (条件2 || 条件3)\n");
      which[4]=1;
    }
    if((which[0]==1 && which[1]==1) || which[2]==1){
      printf("(条件1 && 条件2) || 条件3\n");
      which[5]=1;
    }
    if(which[0]==1 || which[1]==1 && which[2]==1){
      printf("条件1 || 条件2 && 条件3\n");
      which[6]=1;
    }
    if((which[0]==1 || which[1]==1) && which[2]==1){
      printf("(条件1 || 条件2) && 条件3\n");
      which[7]=1;
    }
    if(which[0]==1 || (which[1]==1 && which[2]==1)){
      printf("条件1 || (条件2 && 条件3)\n");
      which[8]=1;
    }
    printf("よって以下の条件が等しい.\n");
    if(which[3]==1){
      if(which[3]==which[4]){
        printf("(条件1 && 条件2 || 条件3)==(条件1 && (条件2 || 条件3))\n");
        which[9]=1;
      }
      if(which[3]==which[5]){
        printf("(条件1 && 条件2 || 条件3)==((条件1 && 条件2) || 条件3)\n");
        which[10]=1;
      }
      if(!(which[9]==0 || which[10]==0))printf("条件1 && 条件2 || 条件3==!?\n");
    }
    if(which[6]==1){
      if(which[6]==which[7]){
        printf("(条件1 || 条件2 && 条件3)==((条件1 || 条件2) && 条件3)\n");
        which[11]=1;
      }
      if(which[3]==which[4]){
        printf("(条件1 || 条件2 && 条件3)==(条件1 || (条件2 && 条件3))\n");
        which[12]=1;
      }
      if(!(which[11]==0 || which[12]==0))printf("条件1 || 条件2 && 条件3==!?\n");
    }
  }
  return 0;
}
