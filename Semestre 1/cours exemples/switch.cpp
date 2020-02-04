#include<stdio.h>

int main() {
	int x;
	
	printf("Donner un entier : ");
	scanf("%d", &x);



	switch(x) {
		case 1 : printf("Lundi :)"); break ;
		case 2 : printf("Mardi :)"); break ;
		case 3 : printf("Mercredi :)"); break ;
		default : printf(":(");
	}
}
