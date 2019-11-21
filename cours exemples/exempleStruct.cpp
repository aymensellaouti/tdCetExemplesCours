#include<stdio.h>
#include<string.h>

typedef struct {
	char nom[20];
	int age;
} Personne;

void showPersonne(Personne p) {
	printf("%s a %d ans\n",p.nom, p.age);
}

void remplirPersonne(Personne* p) {
	printf("Donner l'age : ");
	scanf("%d",p->age));
	fflush(stdin);
	printf("Donner le nom : ");
	gets(p->nom);
}
void showPersonneWithoutBag(char* nom, int age) {
	printf("%s a %d ans\n",nom, age);
}

void remplirTableauDePersonne(Personne* t, int nb){
	int i = 0;
	for (i=0; i<nb; i++) {
		remplirPersonne(t+i);
	}
}

void afficherTableauDePersonne(Personne* t, int nb){
	int i = 0;
	for (i=0; i<nb; i++) {
		showPersonne(t[i]);
	}
}
int main() {
	int nb = 0;
	Personne t[100];
	//printf("%d %d %d",p.age, &(p.age));
	printf("Donner le nombre de personnes : ");
	scanf("%d",&nb);
	remplirTableauDePersonne(t,nb);
	afficherTableauDePersonne(t,nb);
}
