#include<stdio.h>
typedef struct{
	char nom[31];
	int code;
	float solde;
} Client;
void remplirClient(Client* c){
	fflush(stdin);
	printf("Donner le nom : ");
	gets(c->nom);
	printf("Donner le cp : ");
	scanf("%d",&(c->code));
	printf("Donner le solde : ");
	scanf("%f",&(c->solde));	
}

void insererClient(Client* t, int n, Client c) {
	int i= n-1;
	if(n==0 || t[n-1].code < c.code) {
		t[n] = c;
	} else { 
		while(t[i].code > c.code && i>=0){
			t[i+1] = t[i];
			i--;
		}  
		t[i+1] = c; 
	}
}

void remplirTabClient(Client* t, int n) {
	int i=0;
	Client c;
	for (i=0; i<n; i++) {
		remplirClient(&c);
		insererClient(t,i,c);
	}
}

void AfficherClient(Client c) {
	printf("nom:%s\ncode:%d\nsolde:%7.2f\n",c.nom,c.code,c.solde);
}

void afficherTabClient(Client* t, int n) {
	int i=0;
	for (i=0; i<n; i++) {
		AfficherClient(t[i]);
	}
}

int rechercheDicho(Client* t, int n, int code) {
	int d = 0, f = n-1, m=0;
	while (d<=f) {
		m = (d+f)/2;
		if (t[m].code == code) {
			return m;
		} else if (t[m].code < code) {
			d = m+1;
		} else {
			f = m-1;
		}
	}
	return -1;
}

int main() {
	Client t[20];
	int pos;
	remplirTabClient(t,3);
	afficherTabClient(t,3);
	pos = rechercheDicho(t,3,2);
	if(pos>-1) {
		printf("Solde de %s = %f ", t[pos].nom, t[pos].solde);	
	}else {
		printf("PErsonne innexistante !!");
	}
}
