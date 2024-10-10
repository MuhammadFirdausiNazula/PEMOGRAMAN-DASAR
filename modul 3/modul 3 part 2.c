#include <stdio.h>

int main(int argc, char** argv)
{
	int nilai;
	printf("masukkan niai anda: ");
	scanf("%d", &nilai);
	
	if (nilai >= 60){
		printf("anda lulus dengan nilai %d " ,nilai);
	}else
	{
		printf("maaf anda tidak lulus");
	}
	return 0;
}