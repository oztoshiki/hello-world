#include <stdio.h>

int main(int argc,char **argv) {
  int month,day,like,i=0;
  double ans;
  char s[10];

  printf("誕生日は何月ですか?\n");
  fgets(s,sizeof(s),stdin);
  month=atoi(s);

  printf("誕生日は何日ですか?\n");
  fgets(s,sizeof(s),stdin);
  day=atoi(s);

  printf("1~10の間で好きな数字を入力してください.\n");
  fgets(s,sizeof(s),stdin);
  like=atoi(s);

  ans=(month+day+like)/53*100;
  printf("あなたの真面目度は、%fです。",ans);
  return 0;
}
