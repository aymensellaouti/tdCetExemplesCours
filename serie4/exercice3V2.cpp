#include<stdio.h>


void rotationPas1(int* t, int n) {
	int i = 0, aux = t[n-1];
	for (i = n-1; i > 0; i--){
		t[i] = t[i-1];
	}
	t[0]=aux;	
}

void rotationPasP(int* t, int n, int pas ){
	int i = 0;
	for (i = 0; i<pas; i++){
		rotationPas1(t,n);
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
	int t[20] = {1,2,3,4,5,6,7};
	int n = 7, pas;	
	lireEntierStrictementPositif(&pas);
	rotationPasP(t,n,pas);
	afficherTab(t,n);
}

