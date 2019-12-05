#include<stdio.h>
#include<string.h>
typedef struct {
	int code;
	char nom[31];
	float solde;
}Client;

void lireClient(Client* c) {
	fflush(stdin);
	printf("Donner le nom du client : ");
	gets(c->nom);
	printf("Donner le numero du client : ");
	scanf("%d", &(c->code));
	printf("Donner le solde du client : ");
	scanf("%f", &(c->solde));
}

void lireTableauClient(Client* t, int n) {
	int i = 0; Client c ;
	for (i=0;i<n;i++) {
		printf ("Saisir les données du client %d :\n",i+1);
		lireClient(t+i);
	}
}
void afficherClient(Client c) {
	printf("********* Client : %d ******* \n",c.code);
	printf("Nom : %s \n",c.nom);
	printf("Solde : %.2f \n",c.solde);
}
void afficherTableauClient(Client* t, int n) {
	int i = 0; 
	for (i=0;i<n;i++) {
		afficherClient(t[i]);
	}
}
void addClientToFile(FILE* fp, Client c) {
	//pointer vers la fin du fichier
	fseek(fp,0,SEEK_END);
	fprintf(fp,"%4.4d%-30s%-8.2f\n",c.code,c.nom,c.solde);
}
int main() {
	Client t[100];
	Client t1[100];
	FILE* fp = fopen("client.bin", "wb+");
	lireTableauClient(t,3);
	fwrite(t,sizeof(Client),3,fp);
	rewind(fp);
	fread(t1,sizeof(Client),3,fp);
	afficherTableauClient(t1,3);
	fclose(fp);
//	afficherTableauClient(t,3);
}

