#include <stdio.h>

int main(int argc, char** argv)
{
	 //variabel
    float jari_lingkaran; 
    float luas_lingkaran;
	const float phi = 3.14;

    //jari jari lingkaran
    printf("input jari-jari = "); 
	scanf("%f", &jari_lingkaran);
    
    luas_lingkaran = (phi * jari_lingkaran * jari_lingkaran);
    printf("hasilnya adalah %f", luas_lingkaran);
    
	return 0;
}