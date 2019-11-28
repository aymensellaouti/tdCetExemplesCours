#include<stdio.h>

int main() {
	int x;
	char s[100];
	FILE* fp = fopen("test.txt","r+");
	FILE* fpCopie = fopen("testCopie.txt","w");	
/*	fscanf(stdin,"%d",&x);
	printf("\n %d",x);
	*/
	while(fgets(s,150,fp)){
		fprintf(fpCopie,"%s",s);
	}	
}
