/*
#Exercice 1
Algorithme moyenne
Var
tp, ds, exam, moy : reel
Debut
	ecrire("donner la note de TP")
	lire(tp)
	ecrire("donner la note de DS")
	lire(ds)
	ecrire("donner la note d'examen")
	lire(exam)
	
	moy <- (0.2 * tp) + (0.3 *ds) + (0.5 * exam)
	si (moy >=0 et moy <=20) alors
		si (moy >= 16) alors 
			ecrire("Mention Très bien")
		sinon si (moy >= 14) alors
			ecrire("Mention bien")	
		sinon si (moy >= 12) alors
			ecrire("Mention Assez bien")
		sinon si (moy >= 10) alors
			ecrire("Mention passable")
		sinon 
			ecrire ("echec")
		finsi 
	sinon 
		ecrire("les notes saisies sont erronées")
	finsi	
Fin
*/

#include<stdio.h>

int main() {
//Var tp, ds, exam : reel
	float tp = 0, ds = 0, exam = 0, moy = 0;	
/*
	ecrire("donner la note de TP")
	lire(tp)
	ecrire("donner la note de DS")
	lire(ds)
	ecrire("donner la note d'examen")
	lire(exam)
*/
	printf("Donner tp : ");
	scanf("%f", &tp);
	printf("Donner ds : ");
	scanf("%f", &ds);
	printf("Donner examen : ");
	scanf("%f", &exam);
	//moy <- (0.2 * tp) + (0.3 *ds) + (0.5 * exam)
	moy = (0.2 * tp) + (0.3 *ds) + (0.5 * exam);
	printf("Votre moyenne est : %.2f\n", moy);
	if (moy >=0 && moy <=20) {
		if (moy >= 16) 
			printf("Mention Très bien");
		else if (moy >= 14) 
			printf("Mention bien");
		else if (moy >= 12) 
			printf("Mention Assez bien");
		else if (moy >= 10) 
			printf("Mention passable");
		else 
			printf ("echec");
	} else {
		printf("les notes saisies sont erronées");		
	} 
}



