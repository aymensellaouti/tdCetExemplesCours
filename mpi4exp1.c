/*
Algorithme somme
x, y : entier
debut
ecrire("donner deux entiers")
lire(x,y)
ecrire( x,' + ', y ,' = ', x+y )
fin
*/

#include<stdio.h>
void main() {
// x, y : entier je vais déclarer mes deux entiers
	float x = 0,y = 0; 		
//ecrire("donner deux entiers")
	printf("donner deux entiers : \n");
//lire(x,y)
	scanf("%f%f", &x, &y);
	//ecrire( x,' + ', y ,' = ', x+y )
	printf("%d + %d = %d", y, x+y);
}
