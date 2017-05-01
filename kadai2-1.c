#include <stdio.h>

int main(int argc,char **argv) {
	printf("signed char型:%zuバイト\n",sizeof(signed char));
	printf("int型:%zuバイト\n",sizeof(int));
	printf("short型:%zuバイト\n",sizeof(short));
	printf("long型:%zuバイト\n",sizeof(long));
	printf("long long型:%zuバイト\n",sizeof(long long));
	printf("_Bool型:%zuバイト\n",sizeof(_Bool));
	printf("unsigned char型:%zuバイト\n",sizeof(unsigned char));
	printf("unsigned int型:%zuバイト\n",sizeof(unsigned int));
	printf("unsigned short型:%zuバイト\n",sizeof(unsigned short));
	printf("unsigned long型:%zuバイト\n",sizeof(unsigned long));
	printf("unsigned long long型:%zuバイト\n",sizeof(unsigned long long));
	printf("float型:%zuバイト\n",sizeof(float));
	printf("double型:%zuバイト\n",sizeof(double));
	printf("long double型:%zuバイト\n",sizeof(long double));
	return 0;
}
