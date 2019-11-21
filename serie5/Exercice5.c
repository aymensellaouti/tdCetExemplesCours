#include<stdio.h>
#include<string.h>

void compress(char* s, char* s1){
	int i = 0; int nb = 1;
	for(i=0;i<strlen(s);i++){
		if(s[i] == s[i+1]){
			nb++;
		} else {
			sprintf(s1+strlen(s1),"%d %c#\0",nb,s[i]);
			nb = 1;
		}
	}
}

int main() {
	char s1[30] = "1111100111111110000000111";
	char s2[30] = "\0";
	compress(s1,s2);
	puts(s2);
}

