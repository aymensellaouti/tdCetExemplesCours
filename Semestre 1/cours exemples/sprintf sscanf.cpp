#include<stdio.h>
#include<string.h>


int main() {
	int x = 5, y = 8 ;
	char s[50];
	char s1[50] = "25 30 Bonjour";
	sscanf(s1,"%d%d%s",&x,&y,s);
	printf("le resultat de la multi de %d par %d est %d\n",x,y,x*y);
	sprintf(s,"%s %d * %d = %d",s,x,y,x*y);
	puts(s);
	
	
}
