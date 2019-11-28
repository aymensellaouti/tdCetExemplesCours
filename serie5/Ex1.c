#include<stdio.h>
#include<string.h>

int nbOccurence() {
	char mot[30];
	char lettre;
	int i = 0, nb = 0;
	printf("Donner le mot : ");
	scanf("%s",mot);
	fflush(stdin);
	printf("Donner le carcatère : ");
	scanf("%c",&lettre);
	
	for(i=0; i< strlen(mot); i++) {
		if(mot[i]==lettre) {
			nb++;
		}
	}
	return nb;
}

int main() {
	printf("Le nombre d'occurence est %d", nbOccurence());
}
