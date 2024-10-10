#include <stdio.h>
#include <string.h>

void swap(char *string1, char *string2)
{
	char *tmp = (char *)malloc((strlen(string1) + 1) * sizeof(char));
	strcpy(tmp, string1), strcpy(string1, string2), strcpy(string2, tmp);
	free(tmp);
}
int main(){
	char myData[10][2]={"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
	int x,y,z, a=10;
	
	printf("Awal mula soal\n");
	for(x = 0 ; x < 10 ; x++)
	{
		printf("%s ", myData[x]);
	}
	printf("\n\nProgest\n");
	for(y = 0 ; y < 10 ; y++)
	{
		a--;
		swap(myData[y], myData[a]);
		for(z = 0 ; z < 10 ; z++)
		{
			printf("%s ", myData[z]);
	}
		printf("\n");
	}
	printf("\nJawaban ");
	for(z = 0 ; z < 10 ; z++)
	{
		printf("%s ", myData[z]);
	}
	return 0;
}
		
	
	
