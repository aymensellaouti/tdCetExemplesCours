/**
	procedure sousSequences ( 
			E: t : Tableau[1..N] de entiers, n : entier
			S: nbSeqCrois, indDebPGS, indFinPGS
		)	
	var	
	i, tailleSeq, indSeq, taillePGS : entier
	debut
	tailleSeq <- 1
	taillePGS <- 0
	nbSeqCrois <- 1
	pour i <- 1 à n-1 faire
		si (t[i] <= t[i+1]) alors
			tailleSeq <- tailleSeq + 1
		sinon
			nbSeqCrois <- nbSeqCrois + 1
			si (taillePGS < tailleSeq) alors 
				indDebPGS <- i - tailleSeq + 1
				taillePGS <- tailleSeq
			finsi
			tailleSeq <- 1
		finsi
	FinPour	
			si (taillePGS < tailleSeq) alors 
				indDebPGS <- i - tailleSeq + 1
				taillePGS <- tailleSeq
			finsi
			indFinPGS <- indDebPGS + taillePGS - 1
	Fin
**/

#include<stdio.h>

	void sousSequences (int* t, int n, int* nbSeqCrois, int *indDebPGS, int* indFinPGS){
		int i, tailleSeq, indSeq, taillePGS;
		tailleSeq = 1;
		taillePGS = 0;
		*nbSeqCrois = 1 ;
		
		for(i=0; i <n-1; i++) {
			if (t[i] <= t[i+1])
				tailleSeq++;
			else {
				*nbSeqCrois = *nbSeqCrois + 1;
				if (taillePGS < tailleSeq) {
					*indDebPGS = i - tailleSeq + 1;
					taillePGS = tailleSeq;					
				} 
				tailleSeq = 1;
			}
		}	
			if (taillePGS < tailleSeq) {
				*indDebPGS = i - tailleSeq + 1;
				taillePGS = tailleSeq;					
			}
 			*indFinPGS = *indDebPGS + taillePGS - 1;
	} 

	int main() {
		int t[20] = {1, 2, 5, 3, 12, 25, 13, 8, 4, 7, 24, 28, 32, 11, 14 };
		int n = 15;
		int nbSeqCrois = 0, indDebPGS = 0, indFinPGS = 0;
 		sousSequences(t, n, &nbSeqCrois, &indDebPGS, &indFinPGS);
 		printf("Nombre de sequeneces croissantes : %d\n", nbSeqCrois);
 		printf("Indice de début de la plus grande sequenece croissante : %d\n", indDebPGS);
 		printf("Indice de fin de la plus grande sequenece croissante : %d\n", indFinPGS);	}
	
