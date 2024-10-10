#include <stdio.h>

int main(int argc, char** argv)
{
	const int menit = 60;
	const int jam = 3600;
	int total_detik;
	int rumus_menit, rumus_jam;
	
	printf("masukkan detik: ");
	scanf("%i",&total_detik);
	
	rumus_menit = (total_detik / menit);
	rumus_jam = (total_detik / jam);
	
	printf("detik menjadi menit : %i menit\n" ,rumus_menit);
	printf("detik menjadi jam : %i jam\n ",rumus_jam);
	return 0;
}