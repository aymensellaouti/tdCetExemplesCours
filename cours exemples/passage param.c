#include<stdio.h>
int f(int a) {
	a = a+2;
	printf("\nDans f adresse de x = %d\n",&a);
	printf("\nDans f x = %d\n",a);
	return a;
}

int permut(int a, int b) {
	
}
int main() {
	
	int x = 4;
	int y ;
	printf("%d", ++x);
	printf("\nDans main adresse de x = %d\n",&x);
	y = f(x);
	printf("\nx = %d et y = %d \n", x, y);
	permut(x,y);
}
