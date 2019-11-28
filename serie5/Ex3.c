#include<stdio.h>
#include<string.h>

int replace(char* s, char* w1, char* w2) {
	int i = 0;
	char aux[100];
	while(i<=strlen(s)-strlen(w1)) {
		if(strncmp(s+i, w1, strlen(w1))==0){
			strcpy(aux, s+i+strlen(w1));
			strcpy(s+i, w2);
			strcat(s+i,aux);
			i+=strlen(w2);
		} else {
			i++;
		}
	}
}

int main() {
	char s[100] = "ab  ab fab";
	char w1[100] = "ab";
	char w2[100] = "abab";
	replace(s,w1,w2);
	puts(s);
}
