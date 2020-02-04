#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	int numero;
	float totalPrimes;
	float totalRistournes;
} Client;

int existe(Client *t, int n, int numero ){
	int i = 0;
	for (i=0;i<n;i++) {
		if (t[i].numero == numero) {
			return i;
		}
	}
	return -1;
}

int charge_client(Client* t ) 
{ 
	char s[100];
	FILE* fp = fopen("prime.txt", "r");
	int i = 0, numero, pos;
	float prime, pr;
	while(fgets(s,100,fp)){
		sscanf(s,"%5d",&numero);
		pos = existe(t, i, numero);
		sscanf(s+5,"%10f%6f",&prime,&pr);
		if( pos > -1) {
			t[pos].totalPrimes += prime;
			t[pos].totalRistournes += prime * (float)pr/100;
		} else {
			t[i].numero = numero;
			t[i].totalPrimes = prime;
			t[i].totalRistournes = prime * (float)pr/100;
			i++;
		}
	}
	
	fclose(fp);
	return i;
} 

void saveClient(Client* t, int n) {
	FILE* fp = fopen("ristournes.txt", "w");
	int i = 0;
	for (i = 0 ;i<n; i++) {
		fprintf(fp,"%5.5d%-10.3f%-10.3f\n", t[i].numero, t[i].totalPrimes, t[i].totalRistournes);
	}
	fclose(fp);
}

int main() {
	int nb;
	Client t[100];
	nb = charge_client(t);
	saveClient(t,nb);
}
