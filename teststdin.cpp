#include<stdio.h>

int main() {
	int x = 353;
	char c;
	printf("\t %c \n", x);
	printf("donner un entier : ");
	scanf("%d",&x);
	/*
		il verifie si stdin vide ou non 
		 si stdin vide alors
		 	curseur pour ecrire et il attend \n
		 sinon 
		 	lire a partir de stdin
		 finsi	
	   => x = 12
	*/
	
	printf("donner un caractere : ");
	fflush(stdin);
	scanf("%c",&c);
	printf("%d : %c",c,c);
	// stdin pleine je récupere \n  => c = \n
	printf(" %d %c",x,c);
}
