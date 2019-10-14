#include<stdio.h>

int main() {
	float oper1, oper2;
	char operateur;
	
	printf("Donner votre opération de la forme a+b (sans espace) : ");
	scanf("%f%c%f", &oper1, &operateur ,&oper2);
	switch (operateur) {
		case '+' : 	printf("%f%c%f = %f",oper1, operateur, oper2, oper1 + oper2); break;
		case '-' : 	printf("%f%c%f = %f",oper1, operateur, oper2, oper1 - oper2); break;
		case '*' : 	printf("%f%c%f = %f",oper1, operateur, oper2, oper1 * oper2); break;
		case '/' : 	
			if (oper2 != 0)
				printf("%f%c%f = %f",oper1, operateur, oper2, oper1 / oper2);
			else 
				printf("Vous ne pouvez pas divisez par 0");	
			break;
		default: printf("operation erronnée");		
	}	
}
