/*
Algorithme exposant
var 
x, expo : r�el
n, i : entier

debut
	ecrire(" veuillez eznseignez les valeur de x et de n : ")
	lire(x)
	repetez
		ecrire(" veuillez eznseignez les valeur de n qui doit �tre positive : ")
		lire(n) 
	jusqu'� (n>0)
	expo<-1
	Pour i<- 1 � n faire
		expo <- expo * x
	finpour
	ecrire (" x exposant n = ", expo ) 
Fin
*/

#include<stdio.h>

int main() {
/*var 
x, expo : r�el
n, i : entier
*/
	float x = 0, expo = 1;
	int i =0 , n = 0;
/*
ecrire(" veuillez eznseignez les valeur de x et de n : ")
	lire(x)
	repetez
		lire(n) 
	jusqu'� (n>0)
*/	
	printf(" veuillez renseignez la valeur de x : ");
	scanf("%f", &x);
	
	do {
		printf(" veuillez renseignez la valeur de n qui doit �tre positive : ");
		scanf("%d", &n);	
	} while (n < 0);
/*
	Pour i<- 1 � n faire
		expo <- expo * x
	finpour
	ecrire (" x exposant n = ", expo ) 
*/
	for(i=1; i<=n; i++) {
		expo *= x;
	}	
	printf(" %.2f exposant %d =  %.2f", x,n,expo);
}
