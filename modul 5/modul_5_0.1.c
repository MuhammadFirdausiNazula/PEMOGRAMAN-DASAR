#include <stdio.h>
#include <string.h>
 
int main()
{	
	//BAGIAN USERNAME DAN PW
	char        USER[30], PW[30];
	
	int         CEK_PW,
				SALAH_PW,
		        BATAS_MENGULANG_PW			=4;
	
	
	//PASSWORDNYA
	const char  ATUR_PW[]       			=("Admin");
	
	
	//TEMPAT HEADER DAN TAMPILAN AWAL
	const char  JUDUL_1[]               	=("                                               -TOKO SEMBAKO SUKAMAJU-                                                 \n"),
  	  	  	    GARIS[]         			=("-----------------------------------------------------------------------------------------------------------------------\n"),
  	  	  	    TAMPILAN_USERNAME[]			=("                                                 USERNAME    =  "),
  	  	  	    TAMPILAN_PW[]				=("                                                 PASSWORD    =  ");
  	  	  	    

	//TEMPAT MENU DAN UI
	const char*TAMPILAN_BARANG_KE[6]       ={"1.BIMOLI 1L                               =            ",
											 "2.SUSU BERUANG                            =            ",
											 "3.SIRUP MARJAN                            =            ",
											 "4.INDOMIE                                 =            ",
											 "5.TEH SARI MURNI                          =            ",
											 "6.TORABIKA CAPUCINO 1 RENTENG             =            "};  
 	 	 	    
    const char  TAMPILAN_BAYAR[]            =("BAYAR                                     =            [ Y/y ]"),
 	 	 	    TAMPILAN_BELI_LAGI[]        =("BELI LAGI? [ y ] [ n ]                    =            "),
 	 	 	    TAMPILAN_MEMILIH_PESANAN[]  =("PILIH PESANAN ANDA                        =            "),
 	 	 	    TAMPILAN_TOTAL[] 			=("TOTAL                                     =            "),
 	 	 	    TAMPILAN_UANG_PEMBELI[]     =("JUMLAH UANG                               =            "),
 	 	 	    TAMPILAN_KEMBALIAN[]    	=("KEMBALIAN                                 =            "),
 	 	 	    TAMPILAN_UANG_KURANG[]		=("                         [ UANG YANG ANDA MASUKKAN TIDAK MENCUKUPI UNTUK MELAKUKAN PEMBAYARAN INI ] "),
 	 	 	    TAMPILAN_PW_SALAH[]   		=("                                          [ AKSES DITOLAK ANDA BUKAN ADMIN ] "),
 	 	 	    TAMPILAN_HITUNGAN_TERAKHIR[]=("                                              [ KESEMPATAN TERAKHIR ANDA ] "),
 	 	 	    TAMPILAN_COBA_LAGI[]        =("                                                   [ COBA LAGI !!! ] "),
 	 	 	    TAMPILAN_INPUT_SALAH[]      =("                                             MASUKKAN INPUT DENGAN BENAR");
	
				   
	//HARGA MAKANAN
	const int   HARGA_BARANG[6]          	= {9000,          	
	   	   	   	   	   	   	   	   	   	   	   6000,          	
											   9000,          	
											   2000,         		
											   9000, 		        
											   9000};
		
						 
	//TEMPAT NAMA VARIABLE WAKTU PEMILIHAN PEMBELIAN + PENGALIAN + HASIL
    int 		BANYAK_BARANG_YG_DIBELI_1, BANYAK_BARANG_YG_DIBELI_2, BANYAK_BARANG_YG_DIBELI_3, 
	   	   	    BANYAK_BARANG_YG_DIBELI_4, BANYAK_BARANG_YG_DIBELI_5, BANYAK_BARANG_YG_DIBELI_6, 
				TOTAL_BARANG_1, TOTAL_BARANG_2, TOTAL_BARANG_3, 
				TOTAL_BARANG_4, TOTAL_BARANG_5, TOTAL_BARANG_6, 
				HASIL, TOTAL_PEMBELIAN, BELI_LAGI_DONG, SUDAH_MEMILIH,
				UANG_PEMBELI                = 0,
				MENGISI_UANG_KURANG      	= 0,
				BATAS_MENGISI_UANG_KURANG	= 3; 		 
				
	char		PILIHAN_MENU, BELI_LAGI_LAH;
				
				
	//VARIABLE BOOLEAN

	
	//TEMPAT \n
	const char  N20[]           			=("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"),
	 	 	    N15[]           			=("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"),				
				N10[]           			=("\n\n\n\n\n\n\n\n\n\n"),
				N5[]            			=("\n\n\n\n\n"),
				NS[]						=(" "); //GATAU KENAPA TIAP VARIABLE DISAMPING TITIK KOMA GA KEBACA HABIS DI LOOP(GA SEMUA CUMA BAGIAN INI DOANG) JADI YAH INI GA GUNA CUMA SEBAGAI TUMBAL
   	   	   	    
			   		   
    //TEMPAT \t
	
	
	/*
	
	
	dataType variableName = value;
	ya itulah
	mau koment apa coba isinya cuma printf scanf
	
	
	*/
	


		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	//                                                                 - WILAYAH FUNGSI -
	
	
	
	
	
   
    
	
	
			
	
	
	
	
	
	
	
	
	
	
	// DARI SINI MULAINYA
	do // INI BIAR KALO UDAH SELESAI DAN GA BELI LAGI KEMBALI KE PALING AWAL
	{

		
		// USERNAME DAN PW
		for(CEK_PW = 1,SALAH_PW = 0;CEK_PW != 0 && SALAH_PW <= BATAS_MENGULANG_PW;) // BIAR KALO PW SALAH BISA NGULANG BEBERAPA KALI
		{
			if(SALAH_PW > 0 && SALAH_PW < BATAS_MENGULANG_PW)
				{
					printf("%s%s%s\n\n\n                                              [ BATAS PERCOBAAN [ %iX ] ] \n\n%s", NS, N10, TAMPILAN_COBA_LAGI, BATAS_MENGULANG_PW-SALAH_PW, N5);
				}
			else if (SALAH_PW == BATAS_MENGULANG_PW)
				{
					printf("%s%s\n\n\n\n\n%s%s", N10, TAMPILAN_COBA_LAGI, TAMPILAN_HITUNGAN_TERAKHIR, N5);
				}
			printf("%s%s%s%s%s", GARIS, JUDUL_1, GARIS, N10, TAMPILAN_USERNAME);
			scanf("%s", USER);
			printf("%s",TAMPILAN_PW);
			scanf("%s", PW);
		
			CEK_PW = strcmp(ATUR_PW, PW);
			
			if( CEK_PW != 0 )
				{
					SALAH_PW++ ;
				}
		}		
	    
	    
		// INI KALO PW BENAR
		// INI BAGIAN MENU KASIR	
		if(CEK_PW == 0)
		{
			do // INI BIAR BISA ISI LAGI TANPA ISI PW	
			{	
		   	//INI TEMPAT KALO GA DIPILIH = 0
		   	BANYAK_BARANG_YG_DIBELI_1 = 0;
		   	BANYAK_BARANG_YG_DIBELI_2 = 0;
		   	BANYAK_BARANG_YG_DIBELI_3 = 0;
		   	BANYAK_BARANG_YG_DIBELI_4 = 0;
		   	BANYAK_BARANG_YG_DIBELI_5 = 0;
		   	BANYAK_BARANG_YG_DIBELI_6 = 0;
		   	
				do // INI SUPAYA BISA GANTI PESANAN
			   	{
			   	// PEMBUKAAN
				printf("%s%s%s%s                                                                                                   [USER = %s]  \n", N20, GARIS, JUDUL_1, GARIS, USER);
			   	printf("%s%i\n", TAMPILAN_BARANG_KE[0], HARGA_BARANG[0]);
			   	printf("%s%i\n", TAMPILAN_BARANG_KE[1], HARGA_BARANG[1]);
			   	printf("%s%i\n", TAMPILAN_BARANG_KE[2], HARGA_BARANG[2]);
			   	printf("%s%i\n", TAMPILAN_BARANG_KE[3], HARGA_BARANG[3]);
			   	printf("%s%i\n", TAMPILAN_BARANG_KE[4], HARGA_BARANG[4]);
			   	printf("%s%i\n", TAMPILAN_BARANG_KE[5], HARGA_BARANG[5]);
				printf("\n%s", TAMPILAN_BAYAR);
			   	
			   		// INI TEMPAT ISI PESANAN
			   	printf("\n%s", GARIS);
			   	printf("%s", TAMPILAN_MEMILIH_PESANAN);
				scanf("%s", &PILIHAN_MENU);
			   		
			   			switch(PILIHAN_MENU)
						{
    					   case '1':
				   	   	   	   	printf("%s", TAMPILAN_BARANG_KE[0]);
				   	   	  	   	scanf("%i", &BANYAK_BARANG_YG_DIBELI_1);
				  	   	   		SUDAH_MEMILIH = 0;
							   break;
						   case '2':
					   	   	   	printf("%s", TAMPILAN_BARANG_KE[1]);
				  	   		   	scanf("%i", &BANYAK_BARANG_YG_DIBELI_2);
				  	   	   		SUDAH_MEMILIH = 0;
							   break;
						   case '3':
					   	   	   	printf("%s", TAMPILAN_BARANG_KE[2]);
					   		   	scanf("%i", &BANYAK_BARANG_YG_DIBELI_3);
		   		   				SUDAH_MEMILIH = 0;
							   break;
						   case '4':
					   	   	   	printf("%s", TAMPILAN_BARANG_KE[3]);
				  	         	scanf("%i", &BANYAK_BARANG_YG_DIBELI_4);
				  	   	   		SUDAH_MEMILIH = 0;
							   break;
						   case '5':
								printf("%s", TAMPILAN_BARANG_KE[4]);
				            	scanf("%i", &BANYAK_BARANG_YG_DIBELI_5);
				  	   	   		SUDAH_MEMILIH = 0;
							   break;
   					  	   case '6':
   		   						printf("%s", TAMPILAN_BARANG_KE[5]);
				  	   		   	scanf("%i", &BANYAK_BARANG_YG_DIBELI_6);
				  	   	   		SUDAH_MEMILIH = 0;
							   break;
						   case 'Y':
						   		SUDAH_MEMILIH = 1;
  					           break;
						   case 'y':
						   		SUDAH_MEMILIH = 1;
		    	               break; 
		    	           default:
        					   SUDAH_MEMILIH = 0;
        					   break;
						}
                }
				while (SUDAH_MEMILIH == 0);
			
			// INI TEMPAT PENJUMLAAN VARIABLE
			TOTAL_BARANG_1  = (HARGA_BARANG[0]*BANYAK_BARANG_YG_DIBELI_1);
			TOTAL_BARANG_2  = (HARGA_BARANG[1]*BANYAK_BARANG_YG_DIBELI_2);
			TOTAL_BARANG_3  = (HARGA_BARANG[2]*BANYAK_BARANG_YG_DIBELI_3);
    		TOTAL_BARANG_4  = (HARGA_BARANG[3]*BANYAK_BARANG_YG_DIBELI_4);
			TOTAL_BARANG_5  = (HARGA_BARANG[4]*BANYAK_BARANG_YG_DIBELI_5);
			TOTAL_BARANG_6  = (HARGA_BARANG[5]*BANYAK_BARANG_YG_DIBELI_6);
		   	TOTAL_PEMBELIAN = (TOTAL_BARANG_1+TOTAL_BARANG_2+TOTAL_BARANG_3+TOTAL_BARANG_4+TOTAL_BARANG_5+TOTAL_BARANG_6);
			      	
			    MENGISI_UANG_KURANG = 0; //RESET HITUNGAN PENGISIAN UANG 
				UANG_PEMBELI        = 0; 
					
                // FUNGSI BUAT KLO UANG KURANG GA DITERIMA
				while(UANG_PEMBELI < TOTAL_PEMBELIAN) // INI BUAT KALO DUIT KURANG NGULANG
				{
			   		printf("%s", GARIS);
			   		printf("%s%i", TAMPILAN_TOTAL, TOTAL_PEMBELIAN);
			   		printf("\n%s", TAMPILAN_UANG_PEMBELI);
			   	
			   		scanf("%i", &UANG_PEMBELI);
			   		HASIL = (UANG_PEMBELI-TOTAL_PEMBELIAN);
			   		printf("%s", GARIS);
			   		
                    do
                    {
   						
				    	if(UANG_PEMBELI>=TOTAL_PEMBELIAN)
						   	{
					   	   	   	// INI ANGGEP AJA STRUCK
					   	   	   	printf("%s%s%s", GARIS, JUDUL_1, GARIS);
		   	   				    printf("%s%i\n", TAMPILAN_BARANG_KE[0], TOTAL_BARANG_1);
					   	   	   	printf("%s%i\n", TAMPILAN_BARANG_KE[1], TOTAL_BARANG_2);
					   	   	   	printf("%s%i\n", TAMPILAN_BARANG_KE[2], TOTAL_BARANG_3);
					   	   	   	printf("%s%i\n", TAMPILAN_BARANG_KE[3], TOTAL_BARANG_4);
					      	   	printf("%s%i\n", TAMPILAN_BARANG_KE[4], TOTAL_BARANG_5);
					   	   	   	printf("%s%i\n", TAMPILAN_BARANG_KE[5], TOTAL_BARANG_6);
					   	   	   	printf("\n%s%i\n", TAMPILAN_TOTAL, TOTAL_PEMBELIAN);
					   	   	   	printf("\n%s%i", TAMPILAN_KEMBALIAN,HASIL);
					   	   	   	printf("\n%s", GARIS);
					   	   	   	
					   	   	   	
					   	   	   	if(BELI_LAGI_DONG == 2)
									 {
							  	    	printf("%s%s%s", N10, TAMPILAN_INPUT_SALAH, N5);
									 }
							 	 else
								  {
									  printf("%s", N15);
								  }
							   	   	   
								// TEMPAT MILIH BELI LAGI ATAU NGGA KALO NGGA KEMBALI KE PALING ASAL
							   	printf("%s", TAMPILAN_BELI_LAGI);
							    scanf("%s", &BELI_LAGI_LAH);	
							    switch(BELI_LAGI_LAH)
							    {
							   	   case 'Y':
							   	   	BELI_LAGI_DONG = 1;
								  	   break;
				  	    	   	   case 'y':
							   	   	BELI_LAGI_DONG = 1;
								  	   break;
				  	    	   	   case 'N':
							   	   	BELI_LAGI_DONG = 0;
								  	   break;
				  	    	   	   case 'n':
							   	   	BELI_LAGI_DONG = 0;
								  	   break;
							  	    default:
							  	    	BELI_LAGI_DONG =2;
								   break;
							    }
					   	   	}
						else
						 	{
						     	printf("%s%s%s", N20, TAMPILAN_UANG_KURANG, N15);
						     	MENGISI_UANG_KURANG++;
                            }  
					}
					while(BELI_LAGI_DONG == 2);
				}
				while (UANG_PEMBELI < TOTAL_PEMBELIAN && MENGISI_UANG_KURANG < BATAS_MENGISI_UANG_KURANG);
			}
			while(BELI_LAGI_DONG == 1 );
			
		printf("%s", N20);
		}
	
	    //INI KALO PW SALAH
		else
		{
			printf("%s%s\n%s", N15, TAMPILAN_PW_SALAH, N10);
		}
	}
	while(BELI_LAGI_DONG == 0  && CEK_PW == 0 );
	
return 0;
}