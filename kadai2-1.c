#include <stdio.h>

int main(void) {
	printf("signed char�^:%zu�o�C�g\n",sizeof(signed char));
	printf("int�^:%zu�o�C�g\n",sizeof(int));
	printf("short�^:%zu�o�C�g\n",sizeof(short));
	printf("long�^:%zu�o�C�g\n",sizeof(long));
	printf("long long�^:%zu�o�C�g\n",sizeof(long long));
	printf("_Bool�^:%zu�o�C�g\n",sizeof(_Bool));
	printf("unsigned char�^:%zu�o�C�g\n",sizeof(unsigned char));
	printf("unsigned int�^:%zu�o�C�g\n",sizeof(unsigned int));
	printf("unsigned short�^:%zu�o�C�g\n",sizeof(unsigned short));
	printf("unsigned long�^:%zu�o�C�g\n",sizeof(unsigned long));
	printf("unsigned long long�^:%zu�o�C�g\n",sizeof(unsigned long long));
	printf("float�^:%zu�o�C�g\n",sizeof(float));
	printf("double�^:%zu�o�C�g\n",sizeof(double));
	printf("long double�^:%zu�o�C�g\n",sizeof(long double));
	return 0;
}
