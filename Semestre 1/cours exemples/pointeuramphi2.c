#include<stdio.h>

int main() {
	int x ;
	int* p;
	char* p1;
	x=5;
	p = &x;
	*p = 25;
	p = p + 1; // p = p + 1*(sizeof(Type))
	printf("la valeur de x est : %d son adresse est : %d ou %d\n",x, &x, p);
	printf("la valeur de p est : %d son adresse est : %d \net il pointe sur une variable de valeur %d",p, &p, *p);

	printf("\n p1  =  %d son adresse est  %d",p1, &p1);
}	
