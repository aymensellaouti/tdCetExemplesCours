#include<stdio.h>

int main() {
	/*
		pour i<-1 � 3 faire
			// Bloc instructions
			ecrire(i)
		finpour
	*/
	int i = 0;
	int j = 0;
	for( i = 1 ; i<=7 ;i++)
	{
		// aller � la ligne suivante 
		printf("\n");
		// ecrire une ligne
		for(j=1;j<=i;j++){
			printf("%d ", j);			
		}
	}
}
