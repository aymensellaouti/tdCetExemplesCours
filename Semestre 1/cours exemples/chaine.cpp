#include<stdio.h>
#include<string.h>
int main() {
	
	char s[10]="1";
	float x;
/*	for(x=0; x<256;x++)
		printf("%d : %c\n", x,x);
	gets(s);
	printf("%3.3d*%3.5s*\n",x,s);
	printf("*%-3.5s*",s);
	*/
	sscanf(s,"%f",&x);
	printf("\n%f",x);	
}
