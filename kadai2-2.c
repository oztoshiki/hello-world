#include <stdio.h>

int main(int argc,char **argv) {
	int r=13;
	double pi=3.1415,L,S;
	L=2*pi*r;
	S=pi*r*r;
	printf("���a%d�̉~���̒�����%lf�A�ʐς̑傫����%lf�ł��B\n",r,L,S);
	printf("���a%d�̉~���̒�����%7lf�A�ʐς̑傫����%5lf�ł��B\n",r,L,S);
	printf("���a%d�̉~���̒�����%-7.5lf�A�ʐς̑傫����%-5.3lf�ł��B\n",r,L,S);
	printf("���a%d�̉~���̒�����%8.4lf�A�ʐς̑傫����%-8.4lf�ł��B\n",r,L,S);
	return 0;
}
