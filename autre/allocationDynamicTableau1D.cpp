#include<stdio.h>
#include<stdlib.h>

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


void afficherTab2D(int t[][4], int l, int c){
	int i;
	for(i = 0; i<l ; i++){
		afficherTab(t[i], c);
		printf("\n");
	}
}
void remplirTab2D(int t[][4], int l, int c){
	int i;
	for(i = 0; i<l ; i++){
		printf("Veuillez remplir la %d ligne : \n", i+1);
		remplirTab(t[i], c);
	}
}

void afficherTab2D(int** t, int l, int c){
	int i;
	for(i = 0; i<l ; i++){
		afficherTab(t[i], c);
		printf("\n");
	}
}

void lireEntierStrictementPositif(int* n) {
	do {
		printf("Donner le nombre d'elements du tableau : ");
		scanf("%d", n);
	}while(*n <=0 );
}

void allouerTableau(int** t, int* n) {
	lireEntierStrictementPositif(n);
	*t = (int*) malloc(*n * sizeof(int));
}

void allouerTableau2(int** t, int n) {
	*t = (int*) malloc(n * sizeof(int));
}

int main() {
	int* t = NULL;
	int** tab2D = NULL;
	int n = 3, i =0;	
	tab2D = (int**) malloc(n * sizeof(int*));
	// créer chaque ligne de notre tableau de tableau et on va la remplir	
	for(i=0;i < n; i++){
		allouerTableau2(&(tab2D[i]), n);
		remplirTab(tab2D[i],n);
	}
	afficherTab2D(tab2D,3,3); 
	/*	allouerTableau(&t, &n);
	remplirTab(t,n);
	afficherTab(t,n);
	*/
	free(t);
	/**
	**/	
}


