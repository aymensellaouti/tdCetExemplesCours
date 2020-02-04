/**
procédure decalage(E/S: Tab: Tableau[1..N], n: entier, E: val: entier)
var 
i : entier
debut
	i<-n
	tantque(i >= 1 et t[i]>val) faire 
		t[i+1] <- t[i]
		i <- i-1 
	fin
	t[i+1]<-val
fin
*/
#include<stdio.h>
	// t[0]   <=>  *t
	// & t[0] <=>   t = t+i  => i = t-t = 0
	
	// t[1]   <=>  *(t+1)
	// & t[1] <=>   t+1

void remplissage(int* t, int* n){
	int i = 0;
	do{
		printf("Donner le nbre d element : ");
		scanf("%d",n);
	}while(*n<=0 || *n>100);

	for (i=0 ; i<*n; i++) {
		printf("Veuillez saisir le %d eme element : ",i+1);
		scanf("%d", t+i); // scanf("%d", &t[i]);
	}
}

void Affichage(int* t, int n){
	int i = 0;
	for (i=0 ; i<n; i++) {
		printf("t[%d] = %d \n",i+1, t[i]);
	}
}
	
int main(){
	int t[100]; // Allouer 10 cases consécutives de type int et il va 
				// stocker dans t l'adresse de la première case
	int n =0;
	int* a = NULL;
	int* b = NULL;
	a= &n;		
	b= &n;
	remplissage(t,a);
	Affichage(t,n);
}












