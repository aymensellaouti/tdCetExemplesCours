#include<stdio.h>
#include<string.h>

void compress(char* s, char* s2) {
	int i=0, nb = 1;
	for(i=0;i<strlen(s);i++){
		if (s[i]==s[i+1]){
			nb++;
		} else {
			sprintf(s2+strlen(s2),"%d %c#\0",nb, s[i]);
			puts(s2);
			nb = 1;
		}
	}
}

int main() {
	char s1[100]= "1111100111111110000000111";
	char s2[100] = "";
	compress(s1,s2);
}
