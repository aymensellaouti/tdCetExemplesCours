
/*
Algorithme r�sultat
Var
nb :  entier
debut
ecrire ("donner une note")
lire (note)
si (note < 0) alors 
	ecrire(note, " est n�gative, pri�re de saisir une note entre 0 et 20")	
sinon si (note < 10) 
	ecrire(" D�sol� tu dois refaire l'ann�e")
sinon si (note <= 20 ) 
	ecrire(" Bravo tu as r�ussi")		
sinon
	ecrire(note, " est sup�rieure � 20, pri�re de saisir une note entre 0 et 20")	
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
		 	printf(" %d est n�gative, pri�re de saisir une note entre 0 et 20", note);	
		} else if (note < 10) {
			printf(" D�sol� tu dois refaire l'ann�e");			
		} else if (note <= 20 ) {
			printf(" Bravo tu as r�ussi");
		} else {
			printf("%d est sup�rieure � 20, pri�re de saisir une note entre 0 et 20", note);	
		}
}
