/**
fonction nomFonction (param 1 : type1, param2 : type2 ...) : typeValeurDeRetour
var

debut

retourner resultat
fin

Algorithme SommeEntiers

fonction somme(x , y : entier) : entier
var 
debut	
	retourner x+y
fin 
Var
x,y,z :entier
Debut
ecrire("Donner 3 variables entières")
lire(x,y,z)
ecrire ("somme = ", somme(somme(x,y), z))
fin
**/

#include<stdio.h>


int main() {
	int x,y,z;
	printf("Donner 3 entiers ");
	scanf("%d%d%d", &x,&y,&z);
	
	printf("La somme des 3 entiers est : %d", somme2(x,y,z));
}

int somme(int x, int y) {
	return (x+y);
}

int somme2(int x, int y, int z) {
	return(somme(somme(x,y),z));
}

