#include <stdio.h>

int main(int argc, char** argv)
{
	char nama[20],tempat_tinggal[20],tempat_kuliah[20],studi[20];
	int usia; 
	
	printf("nama:");
	scanf("%s",nama);
	
	printf("tempat tinggal:");
	scanf("%s",tempat_tinggal);
	
	printf("tempat kuliah:");
	scanf("%s",tempat_kuliah);
	
	printf("studi:");
	scanf("%s",studi);
	
	printf("usia:");
	scanf("%d",&usia);
	
    printf("halo %s" ,nama);
	printf(" senang bertemu denganmu");
	
	printf(" \nusia mu sekarang sudah %d ",usia);
	printf(" tahun ya?");
	printf("\nmakin keren aja kamu");
	
	printf(" apa lagi kamu kuliah di studi %s" ,studi);
	
	printf(" rumah kamu di %s",tempat_tinggal);
	printf(" \nkapan kapan kita pergi bersama sama ya?");
	
	printf(" aku juga mahasiswa %s",tempat_kuliah);
	
	
	return 0;
}