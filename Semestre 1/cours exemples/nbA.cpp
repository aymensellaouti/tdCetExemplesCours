#include<stdio.h>

int main() {
	char c;
	int nombreA = 0;
	
	while ((c=getchar())!='#') 
	{
		if(c=='a' || c == 'A'){
			nombreA ++;
		}
	}
	
	printf("le nombre de a est : %d", nombreA);

}

