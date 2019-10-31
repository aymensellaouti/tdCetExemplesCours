/*
procedure getMinMax (
				E: t : Tableau [0..N-1] entiers, binf, bsup : entier
				S: imin, imax : entier 	
			)
	var							 
		i : entier
	debut
				imin <- binf
				imax <- binf
				pour i <- binf+1 à bsup faire
					si(t[i] < t[imin]) alors
						imin <- i
					sinon si (t[i] > t[imax]) alors
						imax <- i
					finsi
				finPour
	fin

procedure permuter(E/S :  a,b : entier)
	var
	debut
		a <- a+b
		b <- a-b
		a <- a-b
	fin			

procedure triMinMax(E: n : entier
					E/S : t: Tableau de [0..N-1] entier	
					)
var
   i, imin, imax : entier
debut
	pour i<- 0 à (n-1) div 2 - 1 faire
		getMinMax(tab, i, n-i-1, imin, imax)
		si (imin != i) alors
			permuter(t[imin], t[i])
		finsi
		si (imax != n-i-1) alors
			si (imax != i )
				permuter(t[imax], t[n-i-1])
			sinon
				permuter(t[imin], t[n-i-1])
			finsi		
		finsi
	finpour
*/

#include<stdio.h>

void getMinMax ( int* t, int binf, int bsup, int* imin, int* imax){
	int i = 0;	
	*imin = binf;
	*imax = binf;
	for(i = binf+1; i<=bsup; i++){
		if(t[i] < t[*imin])
			*imin = i ;
		else if (t[i] > t[*imax])
			*imax = i ;
	} 	
}	
void permuter(int* a, int* b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;	
}			

void triMinMax(int* t, int n){
   	int i = 0, imin = 0, imax = 0;
	for (i = 0; i < (n-1)/2; i++){
		getMinMax(t, i, n-i-1, &imin, &imax);
		if (imin != i)
			permuter(t+imin, t+i);
		if (imax != n-i-1) {
			if (imax != i )
				permuter(&t[imax], &t[n-i-1]);
			else
				permuter(&t[imin], &t[n-i-1]);								
		}
	}   	
}

void lireEntierStrictementPositif(int* n) {
	do {
		printf("donner la taille du tableau : ");
		scanf("%d", n);
	}while(*n <=0 );
}

void remplirTab(int* t, int n ){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("donner la case numero %d :", i+1);
		scanf("%d", t+i);		
	}
}

void afficherTab(int* t, int n){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("%d\t ", t[i]);
	}
}

int main() {
	int t[30];
	int n;
	lireEntierStrictementPositif(&n);
	remplirTab(t,n);
	triMinMax(t,n);
	afficherTab(t,n);
}	
