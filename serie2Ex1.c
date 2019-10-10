/*
Exercice 1 série 2
Algorithme mention 

var 
tp, ds, examen, moyenne : reel

debut 
ecrire("donner la note du tp : ")
lire(tp)
ecrire("donner la note de l'examen partiel : ")
lire(ds)
ecrire("donner la note de l'examen : ")
lire(examen)

moyenne <- (0.2*tp) + (0.3 * ds) + (0.5 * examen) 

si (moyenne > 16 et moyenne <=20) alors
	ecrire("Mention tres bien")
sinon si (moyenne > 14) alors
	ecrire("Mention bien")
sinon si (moyenne > 12) alors
	ecrire("Mention assez bien")
sinon si (moyenne >= 10 ) alors
	ecrire("Mention passable")
sinon 
	ecrire ("echec")
finsi		

fin 
*/
#include<stdio.h>

int main() {
	//var 
	//tp, ds, examen, moyenne : reel
	float tp, ds, examen, moyenne;
	/*
	ecrire("donner la note du tp : ")
	lire(tp)
	ecrire("donner la note de l'examen partiel : ")
	lire(ds)
	ecrire("donner la note de l'examen : ")
	lire(examen)
	*/
	printf("Donner les trois notes (tp, ds , examen)  : ");
	scanf("%f%f%f", &tp, & ds, & examen);
	//moyenne <- (0.2*tp) + (0.3 * ds) + (0.5 * examen) 
	moyenne = (0.2*tp) + (0.3 * ds) + (0.5 * examen);
	printf ("votre moyenne esr %f \n", moyenne);
	/*
	si (moyenne > 16 et moyenne <=20) alors
		ecrire("Mention tres bien")
	sinon si (moyenne > 14) alors
		ecrire("Mention bien")
	sinon si (moyenne > 12) alors
		ecrire("Mention assez bien")
	sinon si (moyenne >= 10 ) alors
		ecrire("Mention passable")
	sinon 
		ecrire ("echec")
	finsi		
	*/
	if (moyenne > 16 && moyenne <=20) {
		printf("Mention tres bien");
	} else if (moyenne > 14) {
		printf("Mention bien");
	} else if (moyenne > 12) {
		printf("Mention assez bien");
	} else if (moyenne >= 10 ) {
		printf("Mention passable");
	} else {
		printf("echec");	
	} 

}
