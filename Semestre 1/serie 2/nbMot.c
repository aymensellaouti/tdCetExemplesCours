#include<stdio.h>

//abc     efg
int main() {
	char c , prev = ' ';
	int nbm = 0, taille = 0, nbmTaille =0, tailleMot = 0;
	printf("Donner la taille du mot à chercher : ");
	scanf ("%d", &taille);
	while((c=getchar())!='#') {
		// je lit un alphab
		if (c!= ' ' && c != '\n'){
			if (prev == ' ' || prev == '\n'){
				nbm++;
			}
			tailleMot++;  
		}
		// je lit un séparateur
		else {
			// si le précédent est un caractére alphab
			if(prev != ' ' && prev != '\n') {
				if (taille == tailleMot) {
					nbmTaille ++;
				}
				tailleMot = 0;
			}
		}
		prev = c;
	}
	if (taille == tailleMot) {
		nbmTaille ++;
	}
	printf ("Le nombre de mot est : %d\n", nbm);
	printf ("Le nombre de mot de taille %d est : %d\n", taille, nbmTaille);
}
