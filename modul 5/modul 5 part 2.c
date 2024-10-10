#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char*cars[4] = {"GTR","BMW","ford","mazda"};

	for { int i=0; i<=3; i++}
	{
		printf("cars %d: %s\n",i,cars[i]);
	}
		
	return 0;
}