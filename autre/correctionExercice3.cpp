/**
7  1  2  3  4  5  6  
6  7  1  2  3  4  5
5  6  7  1  2  3  4
*/
#include<stdio.h>
void decalage(int* t, int n) {
	int i = 0;
	for (i= n-1; i>0; i--) {
		t[i] = t[i-1];
	}
}

void rotation(int*t , int n, int pas) {
	int i = 0, x = 0;
	for (i = 0; i<pas ; i++) {
		x = t[n-1];
		decalage(t, n);
		t[0] = x;
	}
}

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
int main() {
	int t[20];
	int n, p;
	lireEntierStrictementPositif(&n);
	remplirTab(t, n);
	printf("Donner le pas de rotation. ");
	lireEntierStrictementPositif(&p);
	rotation(t,n,p);
	afficherTab(t,n);
}
