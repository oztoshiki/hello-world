#include <stdio.h>

int main(int argc,char **argv) {
	double r,pi=3.1415,L,S;
	printf("円の半径を入力してください。:");
	scanf("%lf[~\n]",&r);
	L=2*pi*r;
	S=pi*r*r;
	printf("半径%lfの円周の長さは%lf、面積の大きさは%lfです。\n",r,L,S);
	printf("半径%-5lfの円周の長さは%17lf、面積の大きさは%15lfです。\n",r,L,S);
	printf("半径%7.4lfの円周の長さは%-17lf、面積の大きさは%-15lfです。\n",r,L,S);
	printf("半径%3.0lfの円周の長さは%14.5lf、面積の大きさは%12.3lfです。\n",r,L,S);
	printf("半径%-3.0lfの円周の長さは%-18.4lf、面積の大きさは%-15.4lfです。\n",r,L,S);
	return 0;
}
