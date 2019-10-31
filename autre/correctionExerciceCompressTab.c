// 1 2 3 4 2 2 3 3 3 3 2 2 1 1 4  4 4 1 2 3
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

int recherche(int* t, int n, int val) {
	int i = 0;
	for (i = 0; i<n ; i++) {
		if(t[i] == val) {
			return 1;
		}
	}
	return 0;
}

int compresseTab(int* t, int n) {
	int nb = 1, i = 0 ;
	for (i = 1; i<n ; i++){
		if (!recherche(t, nb, t[i])){
			t[nb] = t[i];
			nb++;
		}
	}
	return nb;
}

void lireEntierStrictementPositif(int* n) {
	do {
		printf("Donner le nombre d'elements du tableau : ");
		scanf("%d", n);
	}while(*n <=0 );
}

int main() {
	int n = 0;
	int t[20];
	lireEntierStrictementPositif(&n);
	remplirTab(t,n);
	printf("******************\n");
	afficherTab(t,n);
	n = compresseTab(t,n);
	printf("******************\n");
	afficherTab(t,n);
}

