#include<stdio.h>
/*
valRetour nomFonction(params) {
 	Bloc Instructions
 	return varTypeValRetour
}
*/
int somme(int, int);

int main() {
	printf("%d", somme(somme(5,6),4));
}

int somme(int x, int y) {
	printf("je calcule la somme de %d %d \n",x,y);
	printf("je retourne %d \n",x+y);
	return x+y;
}
