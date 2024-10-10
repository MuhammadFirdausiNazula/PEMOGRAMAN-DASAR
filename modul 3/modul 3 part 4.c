#include <stdio.h>

int main(int argc, char** argv)
{
	char grade = 'A';
	
	switch(grade)
	{
	case 'A':
		printf("sangat baik \n");
		break;
	case 'B':
		printf("baik \n");
		break;
	case 'c':
		printf("rata rata \n");
		break;
	case 'D':
		printf("rendah \n");
		break;
	case 'E':
		printf("sangat rendah \n");
		break;
	default:
		printf("nilai tidak ada \n");
		break;
	}
	printf("nilai anda adalah %c" ,grade);
	
	return 0;
}