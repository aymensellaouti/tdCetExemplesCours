/*

Algorithme statsNotes
var 
note, meilleurNote, pireNote, totalNote : réel
nbNote : entier
debut 
	meilleurNote  <- 0
	pireNote <- 20
	totalNote<- 0
	repeter
		ecrire("donner le nombre de notes à saisir : ")
		lire(nbNote)
	jsuqu'à (nbNote > 0 )
	
	pour i<- 1 à nbNote faire
		repeter
			ecrire("donner une note entre 0 et 20 ")
			lire(note)
		jusqu'à (note >=0 et note <= 20)
		
		si (note > meilleurNote ) alors 
			meilleurNote <- note
		finsi
		si (note < pireNote ) alors 
			pireNote <- note
		finsi		
		totalNote<- totalNote + note
	finpour
	ecrire("la meilleure note est ", meilleurNote)
	ecrire("la pire note est ", pireNote)
	ecrire("la moyenne des notes est ", totalNote/nbNote)
fin
*/

#include<stdio.h>

int main() {
	float note = 0, meilleurNote = 0, pireNote = 20, totalNote = 0 ;
	int nbNote = 0, i=0;
	
	do {
		printf("donner le nombre de notes à saisir : ");
		scanf("%d", &nbNote);
	}while (nbNote <= 0);
	
		for (i = 1; i<=nbNote ; i++) {
			// On lit la note d'un étudiant qui doit être comprise entre 0 et 20
			do {
				printf("donner une note entre 0 et 20 : ");
				scanf("%f", &note);		
			} while(note<0 || note > 20);

			// Vérifier la meilleur et la pire des notes
			if (note > meilleurNote ) {
				meilleurNote = note ;				
			} 
			if (note < pireNote ) { 
				pireNote = note ;
			}		
			// calculer la somme des notes
			totalNote +=  note ;			
		} 
		printf ("La meilleure note est : %.2f \n", meilleurNote);
		printf ("La pire note est : %.2f \n", pireNote);
		printf ("La moyenne des notes est : %.2f \n", (float) totalNote / nbNote);
}
