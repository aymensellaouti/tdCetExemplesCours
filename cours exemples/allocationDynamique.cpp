#include<stdio.h>
#include<stdlib.h>

void allouerDynTabEntier(int** tab, int n) {
	*tab = (int *)malloc(n* sizeof(int));
}

void remplirTab(int *t, int n) {
	int j;
	for (j=0; j < n; j++){
		printf("Donnez la case numero %d : ", j+1);
		scanf("%d", &t[j]);	
	}
}
void remplissageStatic2D(int t[][10], int l, int c) {
	int i, j;
	for (i=0; i < l ; i++){
		printf("Vous allez remplir la %d ligne : \n",i+1);
		remplirTab(t[i], c);
	}
}

void showTab2DColumn(int t[][10], int l ,int c) {
	int i;
	for (i=0; i < l ; i++){
			printf("%d\n",t[i][c]);
	}
}

void afficherTableau1D(int* t, int n) {
	int j;
	for (j=0; j < n; j++){
		printf("%d\t",t[j]);
	}
}
void affichageStatic2D(int t[][10], int l, int c) {
	int i, j;
	printf("***********Affichage du tableau 2D ********\n");
	for (i=0; i < l ; i++){
		afficherTableau1D(t[i],c);
		printf("\n");
	}
}


int main() {
	/*
	int* t= NULL;
	allouerDynTabEntier(&t, 5);
	remplirTab(t,5);
	afficherTableau1D(t,5);
	free(t);
	afficherTableau1D(t,5);	
	*/
	int i = 0, n = 3 ;
	int** t2d = NULL;
	
	t2d = (int**) malloc(n*sizeof(int*)); 
	
	for(i = 0 ; i < n ; i++ ){
		t2d[i]=(int*) malloc((i+1)*sizeof(int));
		remplirTab(t2d[i],i+1);
	}
	for(i = 0 ; i < n ; i++ ){
		afficherTableau1D(t2d[i],i+1);
		printf("\n");
	}
}
