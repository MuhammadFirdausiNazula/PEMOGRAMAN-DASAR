#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char namaawal [20] ;
	char namatengah [20];
	char namaakhir [20];
	
	printf("masukkan first name:");
	scanf("%s",namaawal);
	
		
	printf("masukkan middle name:");
	scanf("%s",namatengah);
	
	printf("masukkan last name:");
	scanf("%s",namaakhir);
	
	printf("nama lengkap anda %s %s %s",namaawal,namatengah,namaakhir);
	
	return 0;
}