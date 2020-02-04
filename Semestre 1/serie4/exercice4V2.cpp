/*
procedure getMinMax (
			E: t: tableau [0..N-1] entier,binf, bsup : entier
			S: imin, imax : entier
		)
    var 
    	i : entier
    debut
    	imin <- binf
    	imax <- binf
    	pour i<- binf+1 à bsup faire
    		si (t[i]<t[imin]) alors
    			imin <- i
    		sinonsi (t[i]>t[imax])
    			imax <- i
    		finsi
    	finpour
    fin
	procedure permuter(E/S : a,b : entier)
	var
	debut
		a <- a + b
		b <- a - b
		a <- a - b
	fin			
procedure triMinMax(E: n :entier, E/S: t: Tableau[0..N-1])
	var
		imin, imax :  entier
	debut
		pour i <- 0 à (n div 2) - 1  faire
			getMinMax(t, i, n-1-i, imin, imax)
			si (i != imin)alors
				permuter(t[i], t[imin])
			finsi
			si (imax! n-i-1) alors
				si (imax != i)alors
					permuter(t[n-i-1], t[imax])
				sinon
					permuter(t[n-i-1], t[imin])
				finsi	
		finPour
	Fin	
*/
#include<stdio.h>

void getMinMax (int*t, int binf, int bsup, int* imin, int* imax){
	int i = 0;
   	*imin = binf;
   	*imax = binf;
    for(i=binf+1; i <= bsup; i++){
		if (t[i]<t[*imin])
    			*imin = i;
    	else if (t[i]>t[*imax])
	   			*imax = i;      		
	} 
}
	 
void permuter (int* a, int* b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}    
	
void triMinMax(int*t, int n){
	int imin = 0, imax = 0, i = 0;
	for(i = 0; i < n/2; i++){
		getMinMax(t, i, n-1-i, &imin, &imax);
		if (i != imin)
			permuter(t+i, t+imin);
		if (imax != n-i-1){
			if (imax != i)
				permuter(&t[n-i-1], &t[imax]);
			else
				permuter(&t[n-i-1], &t[imin]);
		} 
	}		
}
void remplirTab(int* t, int n ){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("donner la case numero %d :", i+1);
		scanf("%d", t+i);		
	}
}
void lireEntierStrictementPositif(int* n) {
	do {
		printf("donner le pas de rotation : ");
		scanf("%d", n);
	}while(*n <=0 );
}
void afficherTab(int t[], int n){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("%d\t ", t[i]);
	}
}
int main() {
	int t[20];
	int n;
	lireEntierStrictementPositif(&n);
	remplirTab(t,n);
	triMinMax(t,n);
	afficherTab(t,n);
}

		
