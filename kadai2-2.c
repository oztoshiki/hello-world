#include <stdio.h>

int main(int argc,char **argv) {
	int r=13;
	double pi=3.1415,L,S;
	L=2*pi*r;
	S=pi*r*r;
	printf("”¼Œa%d‚Ì‰~ü‚Ì’·‚³‚Í%lfA–ÊÏ‚Ì‘å‚«‚³‚Í%lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%d‚Ì‰~ü‚Ì’·‚³‚Í%7lfA–ÊÏ‚Ì‘å‚«‚³‚Í%5lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%d‚Ì‰~ü‚Ì’·‚³‚Í%-7.5lfA–ÊÏ‚Ì‘å‚«‚³‚Í%-5.3lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%d‚Ì‰~ü‚Ì’·‚³‚Í%8.4lfA–ÊÏ‚Ì‘å‚«‚³‚Í%-8.4lf‚Å‚·B\n",r,L,S);
	return 0;
}
