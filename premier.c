/*

Boucle non deterministe
	tantque
	
Algorithme estPremier
var 
n, i : entier
premier : boolean
debut 
	ecrire("donner un entier : ")
	lire(n)
	i<-2
	premier <- true
	tantque (i <= n/2 et premier = true) faire 
	 	si (n Mod i == 0 ) alors
	 		premier <- false
	 	finsi
	 	i<- i+1
	fintantque
	
	si (premier = false) faire
		ecrire(n , " n'est pas premier" )
	sinon 
		ecrire(n , " est premier" )
	finsi
*/

#include<stdio.h>

int main() {
/*
var 
n, i : entier
premier : boolean
*/
int n = 0, i = 2, premier = 1;
/*	ecrire("donner un entier : ")
	lire(n)
	i<-2
	premier <- true
	tantque (i <= n/2 et premier = true) faire 
	 	si (n Mod i == 0 ) alors
	 		premier <- false
	 	finsi
	 	i<- i+1
	fintantque
*/
	printf("donner un entier : ");
	scanf("%d", &n);
	
	while( i <= n/2 && premier) {
		if (!(n % i)){
			premier = 0;
		}
		i++;
	}	
	/*
		si (premier = false) faire
		ecrire(n , " n'est pas premier" )
	sinon 
		ecrire(n , " est premier" )
	finsi
	*/
	if (premier) {
		printf("%d est premier :) ", n);
	} else {
		printf("%d n'est pas premier :( ", n);
	}
}
