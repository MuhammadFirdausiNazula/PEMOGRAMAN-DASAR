#include <stdio.h>

int main()
{
	int i, j ,temp;
	int a[2] = {7,1};
	
	for (i=0;i<2;i++){
		for (j=i+1;j<2;j++){
		if (a[j]<a[i]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	printf("ini\n");
	for (i=0;i<2;i++){
		printf("%d",a[i]);

	}
	return 0;	 
}