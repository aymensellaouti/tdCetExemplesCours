#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE* fp = fopen("test.txt","r");
	char c;
	char s[201];
	if(!fp) {
		printf("PBM ouverture file ");
		exit(0);
	}
	fseek(fp, 0, SEEK_END);
	printf("%ld",ftell(fp));
	while(fgets(s,100,fp)){
		printf("%s\n",s);
	}
	rewind(fp);
	while((c=fgetc(fp))!=EOF){
		printf("%c\n",c);
	}
	

	fclose(fp);
}
