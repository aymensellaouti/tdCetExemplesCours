/*
procedure getMinMax(
		E: t : Tableau[0..N-1] entier, binf, bsup  : entier
		S: min, max : entier 
		)
	var
	i : entier	
	debut
	min <- binf
	max <- binf
	Pour i <- binf+1 à bsup faire
		si (t[min] > t[i]) alors
			min <- i
		sinon si (t[max] < t[i]) alors 
			max <- i
		finsi	
	Fin
Fin	

procedure permuter( E/S a,b : entier)
var
debut
		a <- a+b
		b <- a-b
		a <- a-b
Fin

procedure TriMinMax(E: n : entier
					E/s : t : Tableau[0..N-1] entier)
var
	i, min, max : entier	
debut
	Pour i <- 0 à n-1 div 2 faire
		getMinMax(t, i, n-i-1, min, max)
		si(i != min) alors
			permuter(t[i], t[min])
		finsi
		si (max != n-i-1) alors
			si (i != max) alors
				permuter(t[max], t[n-i-1])
			sinon
				permuter(t[min], t[n-i-1])
			finsi
		finsi	
	finPour
Fin
*/

#include<stdio.h>

void remplirTab(int* t, int n ){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("donner la case numero %d :", i+1);
		scanf("%d", t+i); // scanf("%d", &t[i]);  		
	}
}

void afficherTab(int t[], int n){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("%d\t ", t[i]);
	}
}


void lireEntierStrictementPositif(int* n) {
	do {
		printf("Donner un nombre positif : ");
		scanf("%d", n);
	}while(*n <=0 );
}

void getMinMax(int* t, int binf, int bsup, int* min, int* max) {
	int i = 0;	
	*min = binf;
	*max = binf;
	for(i = binf+1; i<= bsup; i++ ){
		if (t[*min] > t[i]) 
			*min = i;
		else if (t[*max] < t[i])  
			*max = i;
	}	
}

void permuter(int*a, int*b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void TriMinMax(int* t, int n) {
	int i = 0, min = 0, max = 0;	
	for(i = 0 ; i<= (n-1)/2 ; i++){
		getMinMax(t, i, n-i-1, &min, &max);
		if(i != min)
			permuter(t+i, t+min); // équivault à permuter(&t[i], &t[min]); 
		if (max != n-i-1) {
			if (i != max) 
				permuter(&t[max], &t[n-i-1]);
			else
				permuter(&t[min], &t[n-i-1]);	
		}
	}
}

int main() {
	int t[20];
	int n;
	lireEntierStrictementPositif(&n);
	remplirTab(t,n);
	TriMinMax(t,n);
	afficherTab(t,n);
}

