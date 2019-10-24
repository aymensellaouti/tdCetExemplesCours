#include<stdio.h>
#include<stdlib.h>

int main() {
	int x = -5, m;
	do{
		m = scanf("%d",&x);
		if(m == 0){
			printf("erreur saisie");
			exit(0);			
		}
	}while (x < 0 ); 
	printf("%d",x);
}
