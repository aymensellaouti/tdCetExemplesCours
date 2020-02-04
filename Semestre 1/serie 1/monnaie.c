#include<stdio.h>

/*
Algorithme monnaie
Var
nbre10, nbre5, nbre2, nbre1 : entier
Début

ecrire("donner le montant de la monnaie à rendre")
lire("montant")

nbre10 <- montant Div 10 
nbre5 <- (montant Mod 10) div 5 
nbre2 <- (montant Mod 5) div 2 
nbre1 <- (montant Mod 5) mod 2
ecrire("le nombre de pièce de 10 est ", nbre10) 
ecrire("le nombre de pièce de 5 est ", nbre5)
ecrire("le nombre de pièce de 2 est ", nbre2)
ecrire("le nombre de pièce de 1 est ", nbre1)
Fin
*/

int main() {
	int nbre10 = 0 , nbre5 = 0, nbre2 = 0, nbre1 = 0;
	int montant = 0;
	//ecrire("donner le montant de la monnaie à rendre")
	printf("donner le montant de la monnaie à rendre");
    //lire("montant")
    scanf("%d", &montant);
	nbre10 = montant / 10; 
	nbre5  = (montant % 10) / 5 ; 
	nbre2  = (montant % 5) / 2 ; 
	nbre1  = (montant % 5) % 2 ;
//	ecrire("le nombre de pièce de 10 est ", nbre10) 
    printf("le nombre de pièce de 10 est %d \n", nbre10);
    printf("le nombre de pièce de 5 est %d \n", nbre5);
    printf("le nombre de pièce de 2 est %d \n", nbre2);	
    printf("le nombre de pièce de 1 est %d \n", nbre1);		
}
