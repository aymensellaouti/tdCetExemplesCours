/**
Fonction Mycielskki ( n : entier ) : entier
var 
i, m, c : entier 
debut
	c <- 1  // c1
	m <- 2  // m1
	Pour i <- 2 à n faire
		c <- 3*c + m
		m <- 2*m + 1
	FinPour
	retourner (c)
fin 
**/

#include<stdio.h>

int mycielski ( int n ) {
	int i = 0, m = 2, c =1; 
	for(i = 2; i<=n ; i++) {
		c = 3*c + m ;
		m = 2*m + 1 ;		
	}
	return (c);
}

int main() {
	int n; 
	do {
		printf("donner le nombre de termes : ");
		scanf("%d", &n)	;	
	} while(n < 0);
	
	printf("C%d = %d", n, mycielski(n));
}
