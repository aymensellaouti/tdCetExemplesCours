#include<stdio.h>
void main() {
// x, y : entier je vais déclarer mes deux entiers
	int x = 0; 
	scanf("%d", &x);
	
	// operation ternaire
	(x % 3)? printf("%d n'est pas divisble par 3",x) : printf("%d est divisble par 3",x);	

	/*	
		if (x % 3) {
			printf("%d n'est pas divisble par 3",x);
		} else {
			printf("%d est divisble par 3",x);
		}		
	*/
}
