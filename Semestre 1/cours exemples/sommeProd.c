#include<stdio.h>

/**
procedure sommmeProduit( E x, y : entier, S: som, prod : entier)
var 
debut 
	som <- x+y
	prod <- x*y
fin 
**/
sommeProduit(int x, int y, int* som, int* prod) {
	printf("*********Dans sommeProduit *********** \n");
	printf("somme  = %d et produit = %d \n", som, prod);
	printf("adresse de som  = %d et adresse de prod = %d \n", &som, &prod);
	*som = x+y ;
	*prod = x*y ;	
	printf("somme  = %d et produit = %d \n", *som, *prod);
	printf("*********Fin sommeProduit *********** \n");
}

int main() {
	int a =0 , b = 0, somme = 0 , produit = 0;
	printf("Donner deux entiers : ");
	scanf("%d%d", &a, &b);
	printf("adresse de somme  = %d et adresse de produit = %d \n", &somme, &produit);
	sommeProduit(a,b,&somme,&produit);	
	printf("somme = %d et produit = %d", somme, produit);
}
