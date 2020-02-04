#include<stdio.h>

int main() {
	int x ,y, z, h ;
	int* p = &x;
	int* p1 = &y;
	
	printf("%d", p * p1);
	
	printf("%d %d %d %d",x,y, z, h);
}
