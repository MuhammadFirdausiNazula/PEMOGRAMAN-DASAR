#include <stdio.h>

int main(int argc, char** argv)
{
	int x,y,z;
	printf("masukkan tanggal lahir anda (dd/mm/yyyy):");
	scanf("%d/%d/%d" ,&x,&y,&z);
	printf("tanggal lahir anda : %d/%d/%d" ,x,y,z);
	
	return 0;
}