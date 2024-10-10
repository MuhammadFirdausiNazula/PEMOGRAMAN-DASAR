#include <stdio.h>

int main(int argc, char** argv)
{
	//variabel
    int C; 
	float F;

    //suhu
    printf("Program Konversi Suhu Celcius Ke Fahrenheit\n\n");
    printf("Input : "); 
	scanf("%i", &C);
    F = C*1.8+32;
    printf("Output : %f celcius\n", F);
    
	return 0;
}