/*

selon variable faire 
	case1 : BlocOperation1
	case2: BlocOperation2
	...
	sinon: BlocOperationEnCasOuOnNeMatchRien
finselon

*/

#include <stdio.h>

int main() {
	char c;
	int x;
	printf("Donner un caractere : ");
	
	scanf("%d", &x);
/*	
	selon c faire 
		'0' ... '9' :  caractere numerique
		'a' ... 'z' : lettre minuscule
		'A' ... 'Z' : lettre majuscule
		sinon : caractere special
	finselon
*/
	switch (x) {
		case 0 ... 9 : printf("<10"); break;
		case 10 ... 99 : printf(" >10<100"); break;
		default : printf("très grand");

	}
//	fflush(stdin);
	getchar();
	scanf("%c", &c);
	switch (c) {
		case '0' ... '9' : printf("caractere numerique\n"); break;
		case 'a' ... 'z' : printf("lettre minuscule\n"); break;
		case 'A' ... 'Z' : printf("lettre majuscule\n"); break; 
		default : printf("caractere special");
	}
}
