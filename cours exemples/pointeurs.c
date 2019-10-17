#include<stdio.h>


int main() {
	int x = 5, y = 10; 
	int* pointer = &x;
	
	printf ("la valeur de x est : %d et son adresse est : %d\n", x, &x );
	printf ("la valeur de pointer est : %d\n Et elle pointe sur une variable d'une valeur : %d",pointer, *pointer);
}
