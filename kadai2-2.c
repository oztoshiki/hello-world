#include <stdio.h>

int main(int argc,char **argv) {
	double r,pi=3.1415;

	scanf("%lf",&r);
	printf("半径%lfの円周の長さは%lf、面積の大きさは%lfです。",r,2*pi*r,pi*r*r);
	return 0;
}
