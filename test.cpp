#include<stdio.h>

int main() {
// x, y: entier
 int x=0 , y=0, m=0;
 float f;
 char c;
 scanf("%c", &c);
 scanf("%f", &f);
// printf("%d\n",x);
 switch (c) {
 	case '0' ... '9' : printf("number"); break;
 	case 'a' ... 'z' : printf("caractère"); break;
	default: printf("not in 0 9");
 }
 
}


