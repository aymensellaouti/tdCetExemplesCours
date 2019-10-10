#include<stdio.h>

int main() {
	int i, avant = 1, avant2=1, nb = 0;
	/*
	4 1er termes de la suite de fibonnacie
	avant2 = 1
	avant = 1
	
	F2 = 2
	//Pour calculer F3 
	avant = avant + avant2 = 2
	avant2 = avant - avant 2
	*/
	do {
		printf("donner le nombre de terme à afficher\n ps : le nombre doit etre positif : ");
		scanf("%d", &nb);		
	} while(nb<=0);	

 	printf("F0 = 1\n");	
 	if (nb>1) {
 		printf("F1 = 1\n");		
	}
	for(i = 3 ; i <= nb ; i++) {
		printf("F%d = %d\n", i-1, avant + avant2);
		avant = avant + avant2;
		avant2 = avant - avant2;
	}
}
