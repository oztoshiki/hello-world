#include <stdio.h>

int main(int argc,char **argv) {
	double r,pi=3.1415,L,S;
	printf("�~�̔��a����͂��Ă��������B:");
	scanf("%lf[~\n]",&r);
	L=2*pi*r;
	S=pi*r*r;
	printf("���a%lf�̉~���̒�����%lf�A�ʐς̑傫����%lf�ł��B\n",r,L,S);
	printf("���a%-5lf�̉~���̒�����%17lf�A�ʐς̑傫����%15lf�ł��B\n",r,L,S);
	printf("���a%7.4lf�̉~���̒�����%-17lf�A�ʐς̑傫����%-15lf�ł��B\n",r,L,S);
	printf("���a%3.0lf�̉~���̒�����%14.5lf�A�ʐς̑傫����%12.3lf�ł��B\n",r,L,S);
	printf("���a%-3.0lf�̉~���̒�����%-18.4lf�A�ʐς̑傫����%-15.4lf�ł��B\n",r,L,S);
	return 0;
}
