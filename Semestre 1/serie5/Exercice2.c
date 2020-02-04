#include<stdio.h>
#include<string.h>
void deleteOccv2(char*s){
	int i = 0, j = 0;
	char c;
		for (i=0;i<strlen(s)-1;i++){
		j=i+1;
		while(s[j] == s[i]){
			j++;
		}
		strcpy(s+i+1, s+j);
	}
}
void deleteOcc(char* s){
	int i = 0;
	for (i=0;i<strlen(s)-1;i++){
		while(s[i] == s[i+1]){
			strcpy(s+i, s+i+1);
		}
	}
}
int main() {
	char s[30] = "aabbb   ccddef";
	deleteOccv2(s);
	puts(s);
	
}
