#include <stdio.h>

int main(int argc,char **argv) {
	int r=13;
	double pi=3.1415,L,S;
	L=2*pi*r;
	S=pi*r*r;
	printf("半径%dの円周の長さは%lf、面積の大きさは%lfです。",r,L,S);
	printf("半径%dの円周の長さは%7lf、面積の大きさは%5lfです。",r,L,S);
	printf("半径%dの円周の長さは%-7lf、面積の大きさは%-5lfです。",r,L,S);
	printf("半径%dの円周の長さは%8.4lf、面積の大きさは%-8.4lfです。",r,L,S);
	printf("半径%dの円周の長さは%3lf、面積の大きさは%-4lfです。",r,L,S);
	return 0;
}
