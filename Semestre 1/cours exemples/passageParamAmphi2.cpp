#include<stdio.h>
int f( int* x ) {
    printf("****************Debut de f*************\n");
    printf(" valeur de x %d\n", x);
	printf(" A l entree de f la valeur de x est : %d \n", *x);
	*x = *x + 2;
	printf(" Dans f la valeur de x est : %d \n", *x);
    printf("****************fin de f*************\n");
	return *x;
}
int a() {
	int c = 3;
	f(&c);
}
int main() {
	int x = 3;
	int y;
	printf(" Dans main Avant appel de f la valeur de x est : %d valeur y est %d\n", x,y);
	y = f(&x);
	printf("*******************\n");
	printf(" Dans main l'adresse de x est : %d \n", &x);
	printf(" Dans main la valeur de x est : %d valeur y est %d\n", x,y);
}
