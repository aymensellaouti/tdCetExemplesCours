#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	char message[20];
	char s1[100] = "25 30 bonjour";
	int age = 37;
	int x,y;
	char nom[10] = "aymen";
	sscanf(s1,"%d%d%s",&x,&y,message);  
	printf("%s %d * %d = %d", message, x, y, x*y);
//	sprintf(s,"mon nom est *%-7.7s* et j'ai %-4d ans\n", nom, age);
	puts(s);	
}
