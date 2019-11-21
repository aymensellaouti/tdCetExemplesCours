#include<stdio.h>
#include<string.h>
char* miroir(char* s){
	char m[100];
	int i;
	for (i=0; i<strlen(s);i++){
		m[i] = s[strlen(s)-1-i];
	}
	return m;
}

int main() {
	char s[100] = "insat";
	puts(m);
}
