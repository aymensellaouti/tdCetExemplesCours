#include<stdio.h>
#include<string.h>

void replaceOcc(char* s) {
	int i=0;
	for(i=0; i<strlen(s)-1;i++){
		while(s[i]==s[i+1]) {
			strcpy(s+i, s+i+1);
		}
	}
}

void replaceOcc2(char* s) {
	int i=0, j=0;
	for(i=0; i<strlen(s)-1;i++){
		j=i+1;
		while(s[i]==s[j]) {
			j++;
		}
		strcpy(s+i+1, s+j);
	}
}

int main() {
	char s[50] = "aaaaaaaaabbbbbb        ccddeeeeeeeeef";
	replaceOcc2(s);
	puts(s);
}
