#include <stdio.h>

int main(int argc, char** argv)
{
	char namapanggilan [20];
	char asalkota[20];
	
	printf("masukkan nama panggilan anda:");
	scanf("%s",namapanggilan);
	
	printf("masukkan asal kota anda:");
	scanf("%s",asalkota);
	
	printf("halo %s" ,namapanggilan);
	printf("\nanda berasal dari kota/kabupaten %s",asalkota);
	
	return 0;
}