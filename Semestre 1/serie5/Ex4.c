#include<stdio.h>
#include<string.h>

int exist(char*s, char c) {
	int i=0;
	for(i=0; i<strlen(s);i++){
		if(s[i] == c)
			return 1;
	}
	return 0;
}

void deleteLettreOfOtherString(char* s, char* s1) {
	int i=0;
	for(i=0;i<strlen(s);i++){
		while(exist(s1, s[i])){
			strcpy(s+i, s+i+1);			
		} 
	}
}

int main() {
	char s[50] = "Bonjour";
	char s1[50] = "Brave";
	deleteLettreOfOtherString(s,s1);
	puts(s);
}
