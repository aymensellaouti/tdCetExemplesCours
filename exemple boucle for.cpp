#include<stdio.h>

int main() {
	int i = 0, j = 0;
	/*
		Pour i<-1 à 3 (pas = 2)  
				ecrire (i)
		FinPour
	*/
	/*	
	for(/*initialisation  i = 1; /*Condtion  i < 4 ; /*incrementation i++) {
		//Bloc d'instructions
		
		printf("%d \n", i);
	}
	*/
	
	for (i = 1, j = 1 /* 1 */ ; /*2 */ i <= 3 && j < 4; /*4*/ i++, j+= 2) {
		printf("%d %d \n", i, j); /* 3 */
	}
}
