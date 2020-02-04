#include<stdio.h>

void f(int x, int y) {
	printf ("*************Dans F***********\n");
	printf("La valeur de x avant instruction est : %d \n", x);
	x = x + y;
	printf("La valeur de x après instruction est : %d \n", x);
	printf ("*************Fin de F***********\n"); 
}

int main() {
	int x = 5, y = 7;
	printf("La valeur de x avant appel de F est : %d \n", x);
	f(x,y);
	printf("La valeur de x après appel de F est : %d \n", x);
}
