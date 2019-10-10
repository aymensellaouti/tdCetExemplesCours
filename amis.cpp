#include<stdio.h>
// calul la somme des diviseurs de n privé de 1 et lui meme
int sommeDiviseur(int n){
	int i =0, som = 0;
	for(i = 2; i<=n/2 ;i++){
		if(!(n%i) /* <=> n%i == 0*/){
			som+=i; // som =som+i;
		}
	}
	return som;	
}
// retourne si n et m sont amis
// n et m sont amis si sommDiv n égal m et sommDiv m égal n
int sontAmis(int n, int m) {
	return ((sommeDiviseur(n) == m) && (sommeDiviseur(m) == n ));
}
int main() {
	int n = 0, m = 0;
	printf("Donner deux entiers");
	scanf("%d%d", &n,&m);
	if(sontAmis(n,m)){
		printf("%d et %d sont amies", n,m);
	} else {
		printf("%d et %d ne sont pas amies", n,m);
	}	
}
