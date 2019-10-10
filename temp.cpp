#include<stdio.h>
int main() {

	int temp = 0; 
	printf("Donner une temperature : ");
	scanf("%d", &temp);
	(temp<100)?printf("liquide"):printf("vapeur");
	if(temp < 0) {
		printf("solide");
	} else if (temp < 100) {
		printf("liquide");
	} else {
		printf("vapeur");
	}
}
