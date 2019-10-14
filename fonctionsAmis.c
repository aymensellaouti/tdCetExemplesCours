#include<stdio.h>
// Cette fonction calcule la somme des diviseurs d'un entier
// elle ne considére pas 1 et l'entier lui meme comme des diviseurs
int sommeDiviseurs(int n) {
	int som = 0, i = 0;
	for (i = 2 ; i<= n/2 ; i++) {
		if(!(n%i)) { // <=> if (n % i == 0)
			som+=i; // som = som + i	
		}
	}
	return som;
}
// Elle vérifie si m et n sont deux entiers amis
int amis(int n, int m) {
/**	if( sommeDiviseurs(n) == m && sommeDiviseurs(m)==n) {
		return 1 ;
	} else {
		return 0;
	}
	**/
	return (sommeDiviseurs(n) == m && sommeDiviseurs(m)==n);
}
int main() {
	int n = 0 , m=0;
	do {
		printf("Donner deux entiers");
		scanf("%d%d", &n, &m);		
	}while(n <=0 || m <= 0);
	if(amis(n,m)) {
		printf("%d et %d sont amis :)", n, m);
	} else {
		printf("%d et %d ne sont pas amis :(", n, m);
	}
}
