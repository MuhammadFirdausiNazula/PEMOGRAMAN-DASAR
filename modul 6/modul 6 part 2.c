#include <stdio.h>

float kali(int a, int b)
{
	float hasil =(float)a*(float)b;
	return hasil;
}

void main()
{
	printf("hasil kali 5*2: %.f\n" ,kali(5,2));
	
}