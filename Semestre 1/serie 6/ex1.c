#include<stdio.h>
typedef struct {
	char rue[30];
	int cp;
	char ville[30];
} Adresse;

typedef struct {
	int jour;
	int mois;
	int annee;
} DateNaissance;

typedef struct {
	char nom[30];
	char prenom[30];
	Adresse adr;
	long tel;
	DateNaissance d;
} Fiche;
void lireAdresse(Adresse* adr) {
	printf("Donner la rue : ");
	gets(adr->rue);
	printf("Donner la ville : ");
	gets(adr->ville);
	printf("Donner le code postal : ");
	scanf("%d", &(adr->cp));
}
void lireFiche(Fiche* f) {
	printf("Donner le nom : ");
	gets(f->nom);
	printf("Donner le prenom : ");
	gets(f->prenom);
	lireAdresse(&(f->adr));
	printf("Donner le tel : ");
	scanf("%ld", &(f->tel));
	printf("Donner la date de naissance (j m a) : ");
	scanf("%d%d%d",&(f->d.jour),&(f->d.mois),&(f->d.annee));	
}
void remplirFiche(Fiche* t, int n) {
	int i = 0;
	for (i=0; i<n; i++) {
		lireFiche(t+i);
	}
}

int rechercheParNomEtTel(Fiche* t, int n, char* nom, long tel) {
	int i = 0;
	for (i=0; i<n; i++) {
		if (!strcmp(t[i].nom, nom) && t[i].tel == tel){
			return i;
		}
	}
	return -1;
}

int main() {
	Fiche t[100];
	remplirFiche(t,2);
}
