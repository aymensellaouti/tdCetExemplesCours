#include<stdio.h>
#include<string.h>

int existe(char* s, char c){
	int i=0;
	while(i<strlen(s)) {
		if(s[i]==c)
			return(1);
		i++;
	}
	return 0;
}

void deleteCaracOfOtherString(char* s1, char* s2) {
	int i = 0;
	while (i<strlen(s1)){
		if(existe(s2, s1[i])){
			strcpy(s1+i,s1+i+1);
		} else {
			i++;
		}
	}
}

int main() {
//	char* t = (char*) malloc(n* sizeof(char));
	char s1[20]= "Bonjour";
	char s2[20]= "Brave";
	deleteCaracOfOtherString(s1,s2);
	puts(s1);
}




