//https://github.com/aymensellaouti/tdCetExemplesCours
/**
fonction estCroissante(n : entier) : booleen
var 
debut
	tantque(n>9) faire
		si ((n Mod 10) < (n div 10) mod 10) alors
			returner (faux)
		finsi
		n <- n div 10
	fintanque
	retourner(vrai)
fin
**/ 
#include<stdio.h>
int estCroissante(int n) {
	while(n>9) {
		if ((n % 10) < ((n / 10) % 10)) {
			printf("Problème : %d est < à %d \n", n%10, (n / 10) % 10);
			return (0);			
		}
		n = n / 10;		
	}
	return(1);	
} 

int main() {
	int n;
	do {
		printf("Donner un entier : ");
		scanf("%d",&n);		
	} while(n<=0);
	if(estCroissante(n)){
		printf("Le nombre %d est croissant :D", n);
	}else{
		printf("Le nombre %d n'est pas croissant :(", n);
	}
}





