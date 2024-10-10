#include <stdio.h>

int main(int argc, char** argv)
{
	int a,b,c,d,e;
	float r;
	
	printf("input nilai progdas: ");
	scanf("%d",&a);
	
	printf("input nilai pancasila: ");
	scanf("%d",&b);
	
	printf("input nilai indonesia: ");
	scanf("%d",&c);
	
	printf("input nilai flsp: ");
	scanf("%d",&d);
	
	printf("input nilai kalkulus: ");
	scanf("%d",&e);
	
	r =(a+b+c+d+e)/5;
	
	printf("rata rata anda : %.2f",r);
	return 0;
}