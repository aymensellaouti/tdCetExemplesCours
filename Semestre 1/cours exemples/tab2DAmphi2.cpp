#include<stdio.h>
#include<stdlib.h>
void allouerTabEntier(Type* t, int n) {
	*t = (int*)malloc(n*sizeof(int));
	printf("%d\n", *t);
}

// int*t <=> t[]
void remplirTab1D(int t[], int n) {
	int j;
	for(j=0;j<n;j++){
		printf("Veuillez remplir la case numero %d : ", j+1);
		scanf("%d", &t[j]);
	}
}

void remplirTab2D(int t[][10],int l,int c) {
	int i,j;
	printf("**********Remplissage tableau ***********\n");
	for(i=0; i<l; i++) {
		printf("Veuillez remplir la ligne numero %d\n", i+1);
		remplirTab1D(t[i],c);
	}
}
void affichageTab1D(int* t, int n) {
	int j;
	printf("l adresse de la premiere case est %d \n",t);
	for(j=0;j<n;j++){
		printf("%d\t", t[j]);
	}
}
void affichageTab2D(int t[][10],int l, int c) {
	int i,j;
	printf("**********affichage tableau ***********\n");
	for(i=0; i<c; i++) {
		affichageTab1D(t[i],c);
		printf("\n");
	}
}


int main() {
	int t[10][10];
	int* newTab = NULL; // newTab est de type int* c'est vous qui l avez dit
	allouerTabEntier(&newTab,10);
	remplirTab1D(newTab,3);
	affichageTab1D(newTab,3);
	
	
}
