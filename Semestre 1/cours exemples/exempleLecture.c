#include<stdio.h>

int main() {
	FILE* fp;
	char s [100];
	char c;
	fp = fopen("test.txt","r");

	while((c=fgetc(fp))!= EOF) {
		printf("%c\n",c);
	}
	while(fgets(s,150,fp)){
		printf("%s",s);
	}	
}
