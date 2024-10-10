#include <stdio.h>

int main(int argc, char** argv)
{
	int nilai;
	printf("masukkan nilai anda: ");
	scanf("%d" ,&nilai);
	
	if (nilai >= 60){
		printf("anda lulus dengan nilai %d" ,nilai);
	}
	else if(nilai >= 30 && nilai <60)
	{
		printf("anda mengikuti remidial");
	} 
	else if(nilai<30)
	{
		printf("anda harus mengulang di semester depan");
	}
	
	return 0;
}