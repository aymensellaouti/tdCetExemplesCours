#include<stdio.h>

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
void remplirTab2D(int t[][4], int l, int c){
	int i;
	for(i = 0; i<l ; i++){
		printf("Veuillez remplir la %d ligne : \n", i+1);
		remplirTab(t[i], c);
	}
}

void afficherTab2D(int t[][4], int l, int c){
	int i;
	for(i = 0; i<l ; i++){
		afficherTab(t[i], c);
		printf("\n");
	}
}
int main() {
	int t[5][4];
	remplirTab2D(t,3,3);
	afficherTab2D(t,3,3);	
}


