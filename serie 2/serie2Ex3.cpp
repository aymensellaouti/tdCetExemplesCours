#include<stdio.h>

int main() {
	float oper1 , oper2;
	char op; 
	printf("Donner votre opération ne laissez pas d'espace : ");
	scanf("%f%c%f", &oper1, &op, &oper2);
	
	switch(op) {
		case '+' : printf("%.2f + %.2f = %.2f", oper1, oper2, oper1 + oper2); break;
		case '-' : printf("%.2f - %.2f = %.2f", oper1, oper2, oper1 - oper2); break;
		case '*' : printf("%.2f * %.2f = %.2f", oper1, oper2, oper1 * oper2); break;
		case '/' : 
			if (oper2){
				printf("%.2f / %.2f = %.2f", oper1, oper2, oper1 / oper2);	
			} else {
				printf("erreur division par 0 non permise :(");
			}
			break ;
		default : 	printf("vérifiez votre operation :(");
	}
}
