#include<stdio.h>

int main() {
	int note = -1 ;
	
	do {
		printf("donner une note entre 0 et 20 : ");
		scanf("%d", &note);		
	} while (note < 0 || note > 20);
	/*	
	while (note < 0 || note > 20) {
		printf("donner une note entre 0 et 20 : ");
		scanf("%d", &note);				
	}
	*/
	printf ("Note = %d", note);
		/*
		repeter 
			Bloc iterations
		jusqu'� (condition de fin)
		repeter
			lire(note)
		jusqu'� (note >=0 et note <=20)
		*/		

}
