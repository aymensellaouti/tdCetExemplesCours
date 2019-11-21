#include<stdio.h>
#include<string.h>

int nbOccurence() {
	char s[50];
	char c;
	int i = 0, nb = 0;
	printf("Donner le mot");
	scanf("%s",s);
	fflush(stdin);
	printf("Donner le caractère");
	scanf("%c",&c);
	for(i=0; i<strlen(s);i++){
		if(c == s[i])
			nb++;
	}
	return nb;
}
int main() {
	printf("Le nombre d'occurrence est : %d",nbOccurence());	
}
