/**

12345

fontion estCroissant(n : entier) : booleen
var
	chiffre : entier
debut
	tanque (n > 9) faire
		chiffre <- n Mod 10  
		n <- n Div 10   
		si (chiffre < n Mod 10 ) alors 
			retourner (false)
		finsi
	finTanque
	retourner(true)
fin

**/

#include<stdio.h>

// vous permet de vérifier si Les chiffres d'un entier positif forment une progression croissante
int estCroissant(int n) {
	int chiffre = 0;
	while (n > 9) {
		chiffre = n % 10;  
		n = n / 10;   
		if (chiffre < n % 10 ) {
			return (0);
		}
	}
	return (1);
} 

int main() {
	int n = 0;
	do {
		printf("Donner un entier : ");
		scanf("%d", &n);
	} while(n <= 0);
	
	if(estCroissant(n)) {
		printf("Les chiffres de %d forment une progression croissante ", n);
	} else {
		printf("Les chiffres de %d ne forment pas une progression croissante ", n);
	}
}
