#include <stdio.h>

void myfunction (char name[], int age)
{
	printf("hello %s\n you are %d years old\n" , name,age);
	
}

int main(int argc, char** argv)
{
	myfunction("liam" ,17);
	myfunction("jennei",25);
	myfunction("kim" ,26);
	
	return 0;
}