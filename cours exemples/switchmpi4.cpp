#include<stdio.h>
int main() {

	int x = 0; 
	scanf("%d", &x);
	
	printf("%f", (float)x/3);
	switch (x) {
	case 1 : printf("Lundi "); printf ("pff"); break;
	case 2 : printf("mardi"); break;
	default : printf("demande a Google");
	} 
}
