#include <stdio.h>

int main(int argc,char **argv) {
	int r=13;
	double pi=3.1415;
	printf("半径%dの円周の長さは%lf、面積の大きさは%lfです。",r,2*pi*r,pi*r*r);
	return 0;
}
