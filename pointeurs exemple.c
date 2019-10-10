#include<stdio.h>

int main() {
	int x = 5;
	int y = 0;
	int* p, p1;
	int* p1 = &y;
	char c = '5';
	char* adDeC = &c;
	//p = &x;
	*p = 1;
	*p = *(++p1);
	
	printf("\n%d %d\n",x,y);
	
	printf("%d a l adresse %d qui est la meme que %d", x, p, &x);
	printf("\nvaleur de x =  %d", *p);
}
