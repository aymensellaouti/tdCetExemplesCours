#include<stdio.h>

int main() {
	int x;
	
	printf("Donner un entier : ");
	scanf("%d", &x);
    (x%3) ? printf("%d n'est pas divisble par 3", x) : printf("%d est divisble par 3", x);	
	if(!(x%3)){
		printf("%d est divisble par 3", x);
	} else {
		printf("%d n'est pas divisble par 3", x);
	}
}
