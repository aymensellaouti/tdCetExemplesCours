#include<stdio.h>
void permutation( int * a, int* b)
{
	int aux; 
	aux = *a;
	*a = *b;
	*b = aux;
} 
int produit( int x, int y){
	return(x*y);
} 
int main( )
{
	/*1*/int entier1, entier2; 
	/*2*/ printf(“Saisir les deux entiers\n”) ;
	/*3*/ scanf(“%d%d”,&entier1,& entier2) ;
	/*4*/ permutation(& entier1,& entier2);
	/*5*/ printf(“Apres permutation : a =%d b =%d”,a,b) ;
	/*6*/ printf(“%d*%d=%d\n”,a,b,produit(a,b)) ;
} 

