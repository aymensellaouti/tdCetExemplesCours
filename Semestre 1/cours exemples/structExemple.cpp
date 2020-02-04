#include<stdio.h>
#include<string.h>

typedef struct {
	char nom[20];
	int age;
} Personne;

void lirePersonne(Personne* p) {
	printf("Donner votre nom : ");
	gets(p->nom);
	printf("Donner votre age : ");
	scanf("%d",&(p->age));
	fflush(stdin);
}
void afficherPersonne(Personne p) {
	printf("mon nom est %s et j'ai %d ans\n",p.nom,p.age);
}

void lireTableauPersonne(Personne* t, int n) {
	int i = 0;
	for (i=0; i<n;i++){
		lirePersonne(t+i);
	}
}

void afficherTableauPersonne(Personne* t, int n) {
	int i = 0;
	for (i=0; i<n;i++){
		afficherPersonne(t[i]);
	}
}
int main() {
	char s[10]="abcdefghi";
	char s1[10];
	sprintf(s1,"%5.5s",s);
	puts(s1);
	int n = 3;
	Personne t[10];
	printf("%3.3s",s);
	lireTableauPersonne(t,n);
	afficherTableauPersonne(t,n);
}
