#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char*huruf[2][4] = {
		{"A","B","C","D"},
		{"E","F","G","H"}

	};
	printf("%s", huruf [1][3]);
	return 0;
}