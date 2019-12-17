#include<stdio.h>
#include<string.h>

typedef struct {
	int code;
	float totalPrime;
	float totalRisstourne;
} Client;

int existe(Client* t, int nb, int code) {
	int i = 0;
	for(i = 0; i< nb ; i++) {
		if (t[i].code == code)
			return i;
	}
	return -1;
}

int charge_client(Client *t) {
	int i = 0, code = 0, pos = 0;
	float prime, pr;
	char s[51];
	FILE* fp = fopen("prime.txt", "r");
	while(fgets(s,50,fp)) {
		sscanf(s,"%5d%10f%6f", &code, &prime, &pr);
		pos = existe(t,i,code);
		if (pos==-1) {
			t[i].code = code;
			t[i].totalPrime = prime;
			t[i].totalRisstourne = prime * (float)pr/100;
			i++;
		} else {
			t[pos].totalPrime += prime;
			t[pos].totalRisstourne += prime * (float)pr/100;
		}
	}
	fclose(fp);
	return i;
}


void saveFile(Client* t, int nb) {
	FILE* fp = fopen("ristournes.txt", "w");
	int i = 0;
	for (i = 0; i<nb; i++) {
		fprintf(fp, "%5.5d%-10.3f%-10.3f\n", t[i].code, t[i].totalPrime, t[i].totalRisstourne);
	}
	fclose(fp);
}

int main() {
	Client t[100];
	int nb = 0;
	nb = charge_client(t);
	saveFile(t,nb);
}

