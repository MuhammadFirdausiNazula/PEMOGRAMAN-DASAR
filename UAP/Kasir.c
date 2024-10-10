#include <stdio.h>
#include <string.h>


 void main(void)
{
    printf("============================\n");
	printf("========TOKO MINERAL========\n");
	printf("\n");
	
	
	username();
    kasir();
   
   
}

void username(){
	
	
	char nama[20], nama1[20], password[20], pas[20];;
	int cek1, cek2, a=0;
	
	ulang:
	
	strcpy(nama, "nazula");
	printf("Masukkan Identitas Diri : \n", a+1);
	printf("Nama :", nama);
	gets(nama1);
	
	strcpy(password, "zul");
	printf("Password :", password);
	gets(pas);
	
	cek1 = strcmp(nama,nama1);
	cek2 = strcmp(password, pas);
	
	if (cek1 == 0 && cek2 == 0 ){
		printf("\nSelamat Datang, Nazula\n");
		
		
	}
	
	else
	{
		a=a+1;
		if(a<3){
			printf("\nPassword Anda Salah\n");
			goto ulang;
		}
		else
		{
			printf("Akses di Tolak");
			system("pause");
		}
	}
}

void kasir(){
	
	//Data Variabel
	int a,b,c,d;
	int Aqua,HargaAqua; //Aqua
	int LeMinerale,HargaLeMinerale; //LeMinerale
	int vit, Hargavit; //vit
	int ades, Hargaades; //ades
	int total_Harga;
	int masukkan;
	float kembalian;
	
	
	//menu barang
	printf("DAFTAR MENU MINUMAN MINERAL\n");
	printf("\n");
	printf("|NO|\tMINERAL\t\t|HARGA|\t\n");
	printf("|1|\tAQUA\t\t|RP.5000|\t\n");
	printf("|2|\tLEMINERAL\t|RP.3500|\t\n");
	printf("|3|\tVIT\t\t|RP.3000|\t\n");
	printf("|4|\tADES\t\t|RP.4000|\t\n");
	printf("\n");
	
	printf("jumlah barang yang dibeli\n");
	
	printf ("AQUA\t\t: ");      
	scanf ("%d", &a);
	
	printf ("LEMINERAL\t: ");
	scanf ("%d",&b);
	
	printf ("VIT\t\t: ");
	scanf ("%d",&c);
	
	printf ("ADES\t\t: ");
	scanf ("%d",&d);
	printf("\n");
	
	//harga barang
	printf("TOTAL HARGA PERBARANG\n");
	
	Aqua = 5000;
	HargaAqua = Aqua*a;
	
	LeMinerale = 3500;
	HargaLeMinerale = LeMinerale*b;
	
	vit = 3000;
	Hargavit = vit*c;
	
	ades = 4000;
	Hargaades = ades*d;
	
	
	printf("Harga Aqua		: %d \n", HargaAqua);
	printf("Harga Leminerale	: %d \n", HargaLeMinerale);
	printf("harga vit		: %d \n", Hargavit);
	printf("harga ades		: %d \n", Hargaades);
	printf("\n");
	
	//struk pembayaran
	printf("-----Struk-----\n");
	total_Harga = HargaAqua+HargaLeMinerale+Hargavit+Hargaades;
	printf("Total harga		: %d", total_Harga);
	printf("\n");
	
	printf("uang tunai		: ");
	scanf("%d",&masukkan);
	
	kembalian = (masukkan-total_Harga);
	printf("kembalian		: %.0f\n",kembalian);
	printf("---------------");
	
}