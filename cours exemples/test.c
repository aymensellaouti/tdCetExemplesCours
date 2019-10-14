/*
Algorithme somme 
var
x,y : entier
debut
ecrire("donner deux entier")
lire(x,y)
ecrire(x, '+', y , ' = ', x+y)
fin
*/
#include<stdio.h>

int main() {
//x,y : entier bla bla bla
	float x,y;
	printf("%d", 'a');
//ecrire("donner deux entier")
	printf("donner deux entier : \n");
//lire(x,y)
	scanf("%f%f",&x,&y);
//ecrire(x, '+', y , ' = ', x+y)
	printf("%5.2f + %5.2f = %5.2f \n", &x, &y, x+y);					
}

