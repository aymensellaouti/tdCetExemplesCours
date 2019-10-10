/*
Algorithme somme
Var
x, y: entier
Debut
ecrire("Donner deux entiers : ")
lire(x)
lire(y)

ecrire(x , " + ", y ," = ", x + y)
Fin
*/

#include<stdio.h>

int main() {
// x, y: entier
 int x=0 , y=0, m=0;
 char c; 
 char s[100];
//ecrire("Donner deux entiers : ") bla bla bla 
 printf("Donner deux entiers : ");
//lire(x)
//lire(y)
 // d : entier, f: reel, c: char
 // 12 24 abc
 
 //stdin :
 m = scanf("%d%d", &x, &y);
 printf("\n  nbre de caractères bien lu : %d \n", m);
 //ecrire(x , " + ", y ," = ", x + y)  		
 printf("\t%d + %d = %d\\n", x, y, x+y);
 fflush(stdin);
 scanf("%c", &c);
 printf("\n %c", c);
}
