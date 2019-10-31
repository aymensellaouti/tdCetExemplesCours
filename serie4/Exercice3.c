#include<stdio.h>

void decalerPas1(int* t, int n) {
	int i = 0, aux = t[n-1];
	for (i = n-1; i > 0 ; i--){
		t[i] = t[i-1];
	}
	t[0] = aux;
}

void lireEntierStrictementPositif(int* n) {
	do {
		printf("donner le pas de rotation : ");
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

void afficherTab(int t[], int n){
	int i = 0;	
	for(i = 0; i<n; i++ ){
		printf("%d\t ", t[i]);
	}
}


int main() {
	int pas = 0, n = 7, i = 0;
	int t[10] = {1,2,3,4,5,6,7};
	lireEntierStrictementPositif(&pas);	
	pas = pas % n;
	for(i = 0; i < pas; i++ ){
		decalerPas1(t,n);
	}
	afficherTab(t,n);
}
