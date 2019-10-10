
/*
Algorithme résultat
Var
nb :  entier
debut
ecrire ("donner une note")
lire (note)
si (note < 0) alors 
	ecrire(note, " est négative, prière de saisir une note entre 0 et 20")	
sinon si (note < 10) 
	ecrire(" Désolé tu dois refaire l'année")
sinon si (note <= 20 ) 
	ecrire(" Bravo tu as réussi")		
sinon
	ecrire(note, " est supérieure à 20, prière de saisir une note entre 0 et 20")	
finsi
fin
*/

#include<stdio.h>

int main() {
	int note = 0;
	//ecrire ("donner une note")
		printf("donner une note : ");
	//lire (note)	
		scanf("%d", &note);
		if (note < 0) {
		 	printf(" %d est négative, prière de saisir une note entre 0 et 20", note);	
		} else if (note < 10) {
			printf(" Désolé tu dois refaire l'année");			
		} else if (note <= 20 ) {
			printf(" Bravo tu as réussi");
		} else {
			printf("%d est supérieure à 20, prière de saisir une note entre 0 et 20", note);	
		}
}
