#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
	
	//Data Variabel
	char nama[20],pasword[20], jawab;
	
    const int HargaAqua = 5000; //Aqua
	const int HargaLeMinerale = 3500; //LeMinerale
	const int Hargavit = 3000; //vit
	const int Hargaades = 3000; //ades
	
    int H_Aqua,H_LeMinerale,H_vit,H_ades;
	int total,total_H_Aqua,total_H_LeMinerale,total_H_vit,total_H_ades;
	int pembayaran;
	int kembalian;
	int perulangan; 
	int penilaian;
	bool hasil;
	
    printf("============================\n");
	printf("========TOKO MINERAL========\n");
	printf("\n");
	
	//identitas
	printf("masukkan nama:");
	scanf("%s",nama);
	
	printf("masukkan pasword:");
	scanf("%s",pasword);
	
	printf("halo %s" ,nama);
	printf("\nselamat datang di toko mineral\n");
	
	//menu barang
	printf("DAFTAR MENU MINUMAN MINERAL\n");
	printf("\n");
	printf("|NO|\tMINERAL\t\t|HARGA|\t\n");
	printf("|1|\tAQUA\t\t|RP.5000|\t\n");
	printf("|2|\tLEMINERAL\t|RP.3500|\t\n");
	printf("|3|\tVIT\t\t|RP.3000|\t\n");
	printf("|4|\tADES\t\t|RP.4000|\t\n");
	printf("\n");

do{	
	//harga perbarang
	printf("jumlah barang yang dibeli\n");
	
	printf ("AQUA\t\t %d",HargaAqua); 
	printf(":");    
	scanf ("%d",&H_Aqua);
	
	printf ("LEMINERAL\t %d",HargaLeMinerale);
    printf(":");
	scanf ("%d",&H_LeMinerale);
	
	printf ("VIT\t\t %d",Hargavit);
	printf(":");
	scanf ("%d",&H_vit);
	
	printf ("ADES\t\t %d",Hargaades);
	printf(":");
	scanf ("%d",&H_ades);
	printf("\n");
	
	total_H_Aqua = 5000*H_Aqua;
	total_H_LeMinerale = 3500*H_LeMinerale;
	total_H_vit = 3000*H_vit;
	total_H_ades = 4000*H_ades;
    total= total_H_Aqua+total_H_LeMinerale+total_H_vit+total_H_ades;
    
	//struk pembayaran
	printf("=====Struk=====\n");
	printf("Total harga		: %d",total);
	printf("\n");
	
	printf("uang tunai		: ");
	scanf("%d",&pembayaran);
	
	kembalian = (pembayaran-total);
	printf("kembalian		: %d\n",kembalian);
	printf("================");
    printf("\n");
    
	//bolean
	if (pembayaran >= total){
		hasil = true;
	} else{
		hasil = false;
	}
	if (hasil == true){
		printf("uang anda pas/lebih");
	}else	{
		printf("uang anda kurang");
	}
	
	//perulangan
	printf("\n");
	printf("\n==============================\n");
	printf("\nApakah Ingin Menambah Belanjaan ? \n");
	printf("\nY");
	printf("\t\t\t\tN \n");
	
	printf("Jawab : ");
	scanf("%s", &jawab);
	
	switch(jawab)
	{
	case 'y':
		perulangan = 1;
		break;
	case 'n':
		perulangan = 0;
		break;
	default:
		break;
	}
}

while(perulangan == 1);
{
	printf("\n\n");
	
}
	
	
	//penilaian kasir
	printf("=============================\n");
	printf("Rate 1 - 3 ");
	printf("pilih penilaian anda: ");
	scanf("%d", &penilaian);
	
	switch(penilaian)
	{
	case 1:
		printf("sangat ramah \n");
		break;
	case 2:
		printf("ramah \n");
		break;
	case 3:
		printf("terlalu cuek \n");
		break;
	
	default:
		printf(" tidak ada \n");
		break;
	}
	printf("terimakasih atas penilaiannya\n");
	printf("==============================");
	
	return 0;
}