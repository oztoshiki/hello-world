#include <stdio.h>

int main(int argc,char **argv) {
	double r,pi=3.1415,L,S;
	printf("‰~‚Ì”¼Œa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
	scanf("%lf[~\n]",&r);
	L=2*pi*r;
	S=pi*r*r;
	printf("”¼Œa%lf‚Ì‰~ü‚Ì’·‚³‚Í%lfA–ÊÏ‚Ì‘å‚«‚³‚Í%lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%-5lf‚Ì‰~ü‚Ì’·‚³‚Í%17lfA–ÊÏ‚Ì‘å‚«‚³‚Í%15lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%7.4lf‚Ì‰~ü‚Ì’·‚³‚Í%-17lfA–ÊÏ‚Ì‘å‚«‚³‚Í%-15lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%3.0lf‚Ì‰~ü‚Ì’·‚³‚Í%14.5lfA–ÊÏ‚Ì‘å‚«‚³‚Í%12.3lf‚Å‚·B\n",r,L,S);
	printf("”¼Œa%-3.0lf‚Ì‰~ü‚Ì’·‚³‚Í%-18.4lfA–ÊÏ‚Ì‘å‚«‚³‚Í%-15.4lf‚Å‚·B\n",r,L,S);
	return 0;
}
