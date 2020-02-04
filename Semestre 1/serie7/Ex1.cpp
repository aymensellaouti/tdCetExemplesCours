#include<stdio.h>
#include<string.h>

/*
a
b

d
e
f


*/
void copyFile(FILE* source, FILE* destination) {
	char s[100];
		rewind(source);
		rewind(destination);
		while(fgets(s,60,source)){
			fputs(s,destination);
		}
}

void lireData(char* nom, char* prenom, int* num){
	fflush(stdin);
	printf("Donner le nom : ");
	gets (nom);
	printf("Donner le prenom : ");
	gets (prenom);
	printf("Donner le numero : ");
	scanf("%d",num);
}

void addPersonne(FILE* fp) {
	char nom[16];
	char prenom[21];
	int num, trouve = 0;
	char s[100];
	FILE* temp =fopen("temp.txt","w+");
	lireData(nom,prenom,&num);
	rewind(fp);
	while(!trouve && fgets(s,60,fp)){
		sprintf(nom,"%-15.15s",nom);
	//	puts(nom);
		if(strncmp(s+4,nom,15)<0){
	//		puts(s+4);
			fputs(s,temp);
		} else {
			fprintf(temp,"%4.4d%-15.15s%-20.20s\n",num,nom,prenom);
			fputs(s,temp);
			trouve = 1;
		}
	}
	if (!trouve) {
			fprintf(temp,"%4.4d%-15.15s%-20.20s\n",num,nom,prenom);		
	} else {
		while(fgets(s,60,fp)){
	//		puts(s);
			fputs(s,temp);
		}
	}
	copyFile(temp,fp);
	fclose(temp);
}
int find(FILE* fp, int critere, char* chaine) {
	int pos, nb =0;
	char s[50];
	if (critere == 1) {
		sscanf(chaine,"%d",&nb);
		sprintf(chaine,"%4.4d", nb);
		puts(chaine);
		nb = 4;
		pos = 0;
	} else if (critere == 2) {
		sprintf(chaine,"%-15.15s",chaine);
		nb = 15;
		pos = 4;
	} else {
		sprintf(chaine,"%-20.20s",chaine);
		nb = 20;
		pos = 19;
	}
	rewind(fp);
	while(fgets(s,50,fp)){
		if (!strncmp(s+pos,chaine,nb)){
			puts(s);
			return 1;
		}
	}
	return 0;
} 
void updateNomPrenom(FILE* fp, int code, char* nom, char* prenom) {
	char codeC[20];
	sprintf(codeC,"%d",code);
	if(find(fp,1,codeC)){
		fseek(fp,-37,SEEK_CUR);
		fprintf(fp,"%-15.15s%-20.20s\n",nom,prenom);
	}
}
int main() {
	FILE* fp = fopen("personne.txt","r+");
	char chaine[50]= "p";
	char nom[50]= "sellaouti";
	char prenom[50]= "aymen";	
	//addPersonne(fp);
/*	if(!find(fp,3,chaine)){
		printf("innexistant !!");
	}
	*/
	updateNomPrenom(fp,788,nom,prenom);
	fclose(fp);
}
