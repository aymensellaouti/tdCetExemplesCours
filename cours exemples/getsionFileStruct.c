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
int loadFile(FILE* fp, Client* t) {
	char s[100];
	int i = 0;
	rewind(fp);
	while(fgets(s,50,fp)){
		puts(s);
		sscanf(s,"%4d",&(t[i].code));
		sprintf(t[i].nom,"%30s\0",s+4);
		sscanf(s+34,"%f",&(t[i].solde));
		i++;
	}
	return i;	
}
void saveFile(FILE* fp, Client* t, int n) {
	int i = 0;
	for (i=0; i<n; i++) {
		addClientToFile(fp,t[i]);
	}
}
int updateSolde(FILE* fp, int code, float newSolde){
	int codeN;
	char s[100];
	rewind(fp);
	while(fgets(s,50,fp)){
		sscanf(s,"%4d",&codeN);
		if (code == codeN) {
			fseek(fp,-10,SEEK_CUR);
			fprintf(fp,"%-8.2f",newSolde);			
			return 1;
		}
	}
	return 0;	
}
int main() {
	Client t[100];
	FILE* fp = fopen("client.blabla", "r+");
	int indice = 0, n = 0;
//	lireTableauClient(t, 3);
//	saveFile(fp,t,3);
//	n = loadFile(fp,t);
//	afficherTableauClient(t,n);
	updateSolde(fp,789,1234.35);
	fclose(fp);
//	afficherTableauClient(t,3);
}

