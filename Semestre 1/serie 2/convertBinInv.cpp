#include<stdio.h>

int main() {
	int n = 0;
	printf ("donner un entier : ");
	
	scanf("%d",&n);
	/*
	tanque(n>0) alors
			ecrire(n Mod 2)
			n <- n div 2
	fintanuqe
	*/
	
	while(n>0) {
		printf("%d ", n % 2);
		n = n/2 ;	
	}
}
