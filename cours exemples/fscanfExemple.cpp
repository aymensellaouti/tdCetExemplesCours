#include<stdio.h>
#include<stdlib.h>
int main() {
	int x;
	FILE* fp = fopen("test.txt","r");
	FILE* fp1 = fopen("testC.txt","w");
	char s[201];
	if(!fp) {
		printf("PBM ouverture file ");
		exit(0);
	}
	while(fgets(s,100,fp)){
		fprintf(fp1,"%s",s);
	}
/*	fscanf(stdin,"%d",&x);
	printf("\n%d",x);*/
	fclose(fp);
}
