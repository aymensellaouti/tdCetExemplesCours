#include<stdio.h>
// Cette fonction vérifie si x divise n
int estDiviseur(int n, int x) {
	return (!(n%x)); // return (n%x == 0)
}

// Calcule la somme des diviseurs d'un entier
// on ne prend pas en compte 1 et le nbre lui meme 
int sommeDiviseur(int n) {
	int i = 0, som = 0;
	for(i=2; i<= n/2 ;  i++) {
		if(estDiviseur(n,i)){
			som += i ; // => som = som + i 
		}
	}
	return som;
}
// Vérifie l'amitié
int amis(int n, int m) {
	return (sommeDiviseur(n) == m && sommeDiviseur(m)==n);
}


int main() {
	int n, m;
	
	do {
		printf("Donner deux entier positif : ");
		scanf("%d%d",&n, &m);		
	} while(n<=0 || m <=0);
	if(amis(n,m)){
		printf("Amis :)");
	} else {
		printf("Amis :(");
	}
}

