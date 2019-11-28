#include<stdio.h>
typedef struct {
	char nom[30];
	int code;
	float solde;
} Produit;

void lireProduit(Produit* p) {
	fflush(stdin);
	printf("Donner le nom : ");
	gets(p->nom);
	printf("Donner le code : ");
	scanf("%d", &(p->code));
	printf("Donner le solde : ");
	scanf("%f", &(p->solde));
}
void insererProduit(Produit* t, int n, Produit p) {
	int i=0, j;
	if (t[n-1].code <= p.code){
		t[n]=p;
	} else {
		while(i<n && t[i].code<p.code){
			i++;
		}
		for(j=n; j>i; j--){
			t[j] = t[j-1];
		}
		t[i] = p;
	}
}
void remplirProduit(Produit* t, int n) {
	int i = 0;
	Produit p;
	for (i=0; i<n; i++) {
		lireProduit(&p);
		insererProduit(t,i,p);
	}
}
void afficherProduit(Produit p) {
	printf("code = %d\nnom = %s\nsolde = %f\n", p.code, p.nom, p.solde);
}

void afficherTabProduit(Produit* t, int n) {
	int i=0;
	for (i=0; i<n; i++) 
		afficherProduit(t[i]);
}

int	rechercheDicho(Produit* t, int n, int code) {
	int binf = 0, bsup = n-1, m = 0;
	while(binf<=bsup) {
		m = (binf+bsup)/2;
		if (t[m].code == code)
			return m;
		else if (t[m].code > code) {
			bsup = m-1;
		} else {
			binf = m+1;
		}
	}
	return -1;			
}
int main() {
	int pos;
	Produit t[100];
	remplirProduit(t,3);
	afficherTabProduit(t,3);
	pos = rechercheDicho(t,3,2);
	if (pos == -1)
		printf("Introuvable");
	else 
		printf("Solde : %f",t[pos].solde);
}
