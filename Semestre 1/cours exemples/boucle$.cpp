#include<stdio.h>

int main() {
	float note = 0, somme = 0;
	int nombre = 0;
	
	while (note>=0) 
	{
		do 
		{
			printf("Donner une note, pour arreter tapez -1 : ");
			scanf("%f", &note);
		} while(note>20);
		if(note >= 0) {
			somme+= note; // somme = somme + note;
			nombre++ ;
		}
	} 
	if(nombre /*nombre != 0*/) {
		printf("%f", somme/nombre);		
	} else {
		printf("aucune note saisie");
	}

}
