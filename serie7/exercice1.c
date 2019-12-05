/*
Numéro de matricule                      4   caractères
Nom                                                15 caractères         
Prénom                                            20 caractères
*/
#include<stdio.h>
#include<string.h>
void copieFile(FILE* dest, FILE* source) {
	char s[1000];
	rewind(dest);
	rewind(source);
	while(fgets(s,1000,source)){
		fputs(s,dest);
	}
}
void lireDonneesPersonne(char* nom, char* prenom, int *num) {
	printf("Donner le numero de la personne : ");
	scanf("%d",num);
	fflush(stdin);
	printf("Donner le nom de la personne : ");
	gets(nom);
	printf("Donner le prenom de la personne : ");
	gets(prenom);
}

void ajoutPersonne(FILE* fp) {
	char nom[16];
	char prenom[21]; 
	char s[100];
	FILE* fp1 = fopen("temp.txt","w+");
	int num = 0, trouve = 0;
	lireDonneesPersonne(nom, prenom, &num);
	sprintf(nom,"%-15.15s",nom);
	rewind(fp);
	while (!trouve && fgets(s, 50, fp)) {
		if (strncmp(s+4, nom, 15)<0) {
			fputs(s,fp1);
		} else {
			fprintf(fp1,"%4.4d%-15.15s%-20.20s\n",num, nom, prenom);
			fputs(s,fp1);
			trouve = 1;
		}		
	}
	if (!trouve) {
			fprintf(fp1,"%4.4d%-15.15s%-20.20s\n",num, nom, prenom);
	} else {
		while (fgets(s, 50, fp)) {
			fputs(s,fp1);	
		}
	}
	copieFile(fp,fp1);
	fclose(fp1);
}

int find(FILE* fp, int critere, char* chaine) {
	int pos, nb;
	char s[60];
	if (critere == 1) {
		pos = 0;
		sscanf(chaine,"%d",&nb);
		sprintf(chaine,"%4.4d",nb);
		puts(chaine);
		nb = 4;
	} else if (critere == 2) {
		pos = 4;
		nb = 15;
		sprintf(chaine, "%-15.15s", chaine);
	} else {
		pos = 19;
		nb = 20;
		sprintf(chaine, "%-20.20s", chaine);
	}
	rewind(fp);
	while (fgets(s,50,fp)) {
		if (! strncmp(s+pos, chaine, nb)){
			printf("%s",s);
			return 1;
		}
	}
	return 0;
}
int main() {
	FILE* fp = fopen("personne.txt","r+");
	char chaine[10]="test";		
	find(fp,2,chaine);
	fclose(fp);
}
