#include<stdio.h>
#include<string.h>

void replaceWord(char*s, char* w1, char* w2) {
	int i = 0;
	char aux[100];
	// "ijk  ab fgh\0 ab fgh"
	// aux =   ab fgh
	for(i=0; i< strlen(s) - strlen(w1); i++) {
		if(!strncmp(s+i, w1, strlen(w1))){
			strcpy(aux,s+i+strlen(w1));
			strcpy(s+i,w2);
			strcat(s+i,aux);
			i+=strlen(w2)-1;
		}
	}
}
int main(){
	char s[20] = "ab  ab fgh";
	char w1[10] = "ab";
	char w2[10] = "abab" ;
	replaceWord(s,w1,w2);
	puts(s);	
}





