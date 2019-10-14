#include <stdio.h>

int main() {
	int nombre = 0;
	float note = 0;
	float total = 0;
	
	while(note>=0) {
		do {
			printf("donner une note entre 0 et 20 : ");
			scanf("%f",&note);			
		} while(note<-1 || note >20);
		if(note >= 0){
			total += note; /* équivault à total = total +note*/
			nombre++;
		}	
	}
	if(nombre)
		printf("La moyenne est : %f", total/nombre);
	else
		printf("Aucune note saisie");
}
