#include<stdio.h>
typedef struct{
	char rue[30];
	int cp;
	char ville[30];
} Adresse;

typedef struct{
	int j;
	int m;
	int a;
} DateNaissance;

typedef struct{
	char nom[30];
	long tel;
	char prenom[30];
	DateNaissance d;
	Adresse adr;
} Fiche;
void lireAdresse(Adresse* a){
	fflush(stdin);
	printf("Donner le rue : ");
	gets(a->rue);
	printf("Donner le ville : ");
	gets(a->ville);
	printf("Donner le cp : ");
	scanf("%d",&(a->cp));	
}

void lireFiche(Fiche* f) {
	fflush(stdin);
	printf("Donner le nom : ");
	gets(f->nom);
	printf("Donner le prenom : ");
	gets(f->prenom);
	printf("Donner le telephone : ");
	scanf("%ld",&(f->tel));
	lireAdresse(&(f->adr));
	printf("Donner la date de naissance (j m a) : ");
	//lireDn(&f->d)
	scanf("%d%d%d",&(f->d.j),&(f->d.m),&(f->d.a));
}

void remplirTabFiche(Fiche* t, int n) {
	int i=0;
	for (i=0; i<n; i++) {
		lireFiche(t+i);
	}
}

int rechercheNom(Fiche* t, int n, char* nom) {
	int i=0;
	while (i<n) {
		if(strcmp(nom, t[i].nom)==0) {
			return i;
		}
		i++;
	}
	return -1;
}
