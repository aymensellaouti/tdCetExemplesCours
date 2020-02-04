/*
Procedure sPpI(E: n:entier, S: Som, prod : entier)
Var 
chiffre : entier
Début
	som <- 0
	prod <- 0
	tantque(n > 0) faire
		chiffre <- nMod10
		si(chiffre Mod 2 = 0) alors
			som <- som + chiffre	
		sinon
			si (prod = 0) alors
				prod <- 1
			finsi
			prod <- prod * chiffre
		finsi
		n <- n div 10
	fintanque	
Fin
*/

#include<stdio.h>

void sPpI(int n,  int* som, int* prod) {
    int chiffre;
	*som = 0;
	*prod = 0;
	while(n > 0) {
		chiffre = n%10;
		if(chiffre % 2 == 0 ) {
			*som += chiffre ;	
		} else {
			if (*prod == 0) 
				*prod = 1;
			*prod *= chiffre;
		}
		n = n / 10;
	}
}

void saisieEntierPositif(int* m){
	*m = 5;
	do {
		printf("Donner un entier positif : ");
		scanf("%d", m);
	} while(*m < 0);
}


int main() {
	int somme, produit, n = 0;
	saisieEntierPositif(*n);
	sPpI(n,&somme,&produit);
	printf("Somme = %d\nproduit = %d\n", somme, produit);
}
