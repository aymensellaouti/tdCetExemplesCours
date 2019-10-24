#include<stdio.h>

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


void affichageStatic2D(int t[][10], int l, int c) {
	int i, j;
	printf("***********Affichage du tableau 2D ********\n");
	for (i=0; i < l ; i++){
		for (j=0; j < c; j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}


int main() {
	int t[20][10]={{1,2,3}, {7,55,44}, {78,55,66}};
	//remplissageStatic2D(t,3,3);
	affichageStatic2D(t,3,3);
		
}
