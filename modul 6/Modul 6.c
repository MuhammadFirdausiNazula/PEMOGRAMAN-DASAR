#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


void Banner(){
	
	
	printf("===================================================================================================================== \n");
	printf("\n"); //
	printf("\t\t\t\t\t Welcome to the Elektronik Equipment Shop \n");
	printf("\t\t\t\t\t      'Everything You Need Is Here'\n");
	printf("\n");
	printf("===================================================================================================================== \n");
	
	
}

void name_Customer(){
	
	char *Customer;
	printf("===================================================================================================================== \n");
	printf("\n\n");
	printf("\t\t\t\t\t  Enter the customer's name : ");
	scanf("%s", &Customer);
	
	printf("\t\t\t\t\t\t | Hello, %s |\n\n ", &Customer);
}

void List_of_Menu(char MenuItems[20], float PriceItems){
	
	printf("\t\t\t%s $.%.2f  |\n", MenuItems, PriceItems);
	
}

void LoginMenu_Cashier(){ 
	
//Type Data for Login
	char firstname1[20], name2[20], password1[20], pass2[20], menu, menu1;
	int cek1, cek2, repeat, repeat_cashier, repeat_login, *invalid = 0;
	
	
//[const] list of items & Array

    float price[5]; //Array for Price of Items
    
    price[0] = 1.00;
	price[1] = 1.50;
	price[2] = 3.00;
	price[3] = 4.50;
	price[4] = 2.00;
    
	const float Cable = 1.00;
	const float Light_Switch = 1.50;
	const float Led_Lights = 3.00;
	const float Electric = 4.50;
	const float Battery = 2.00;
	
	//Array for List of Menu
	const char*Menu[5] = {"1. Cable / 2,5 meter : \t\t\t\t\t",
						  "2. Light Switch      : \t\t\t\t\t",
                          "3. LED Lights        : \t\t\t\t\t",
                          "4. Electric Socket   : \t\t\t\t\t",
                          "5. Battery           : \t\t\t\t\t",
 	   	                  };
    
	float a,b,c,d,e;
	float Cablenum;
	float Lightnum;
	float Lednum;
	float Electricnum;
	float Batterynum;
	
//Total Price
	float Total_Price;
	
//Pay the Items
	float Money;
	
//How Many Consumers Receive Changes
	float Change;
	

	
do{
	do{
	
	printf("\n\n\t\t\t\t\t\t\t---LOGIN--- \n");
	printf("\n");
	
	//Input Name
	strcpy(firstname1,"dimas");
	printf("\n\n\t\t\t\t\t\tEnter Your Name : ");
	scanf("%s", name2);
	
	//Input Password
	strcpy(password1,"store");
	printf("\t\t\t\t\t\tEnter Password  : ");
	scanf("%s", pass2);
	
	
	cek1 = strcmp(firstname1, name2);
	cek2 = strcmp(password1, pass2);
	
	
	if (cek1==0 && cek2==0){
		printf("\n\n\n\n\t\t\t\t\t\t  |Welcome Back, Dimas|\n\n\n\n\n\n\n\n\n");
		repeat = 1; //sitution for function while
	}
	
	else
	{
		printf("\n\t\t\t\t\t|Your Account invalid, Please Try Again!|\n\n\n\n\n\n\n\n\n");
		//situation for function while
		repeat =0;
		invalid = invalid + 1;
	}
	
	
	printf("\n\n");
	
	}
	
	//situation when repeats the code
	
	while(repeat==0 && invalid !=4);
	{
		printf("You're Account Invalid");
		system("cls");
	} 
	
	

	

//Body
do{	
	if(cek1==0 && cek2==0){
		
	//Function of Void Customer's Name.	
	name_Customer();	
	
	//List Of Good Prices
	printf("\t\t\t\t\t------- List of Good Prices : -------\n"); 
	printf("\n\n");
	
//Function of Parameter
	List_of_Menu(Menu[0], price[0]);
	List_of_Menu(Menu[1], price[1]);
	List_of_Menu(Menu[2], price[2]);
	List_of_Menu(Menu[3], price[3]);
	List_of_Menu(Menu[4], price[4]);
	
	printf("\n\n");
	printf("===================================================================================================================== \n");
	
	printf("\n\t\t\t\t   How Much Do You Want About the Items Above?\n");
	printf("\n\n");
	
	//How Much Consument pick the Items
	printf("1. Cable           [$.1.00]  : ");
	scanf("%f", &a);
	
	printf("2. Light Switch    [$.1.50]  : ");
	scanf("%f", &b);
	
	printf("3. LED Lights      [$.3.00]  : ");
	scanf("%f", &c);
	
	printf("4. Electric Socket [$.4.50]  : ");
	scanf("%f", &d);
	
	printf("5. Battery         [$.2.00]  : ");
	scanf("%f", &e);
	
	//Function of Data Variabel
	
	Cablenum    = (price[0]*a);
	Lightnum    = (price[1]*b);
	Lednum      = (price[2]*c);
	Electricnum = (price[3]*d);
	Batterynum  = (price[4]*e);
	

	printf("\n");
	
	printf("Total Price :\n");
	printf("\n");
	
	//How Much Consumers Have to Pay
	printf("1. Cable            : $.%.2f \n", Cablenum);
	printf("2. Light Switch     : $.%.2f \n", Lightnum);
	printf("3. LED Lights       : $.%.2f \n", Lednum);
	printf("4. Electric Socket  : $.%.2f \n", Electricnum);
	printf("5. Battery          : $.%.2f \n", Batterynum);
	
	printf("\n");
	
//Total Price
	Total_Price = (Cablenum+Lightnum+Lednum+Electricnum+Batterynum);
	printf("        Receipt     : $.%.2f \n", Total_Price);
	
//Pay The Items
	printf("\n");
	printf("        Your Money  : $.");
	scanf("%f", &Money);
	
	
//How Many Consumers Receive Changes

	Change =(Money-Total_Price);
	
	bool Enough;
	
	if(Money >= Total_Price){
		Enough = true;
	}
	
	else
	{
		Enough = false;
	}
	
	if(Enough == true){
		printf("        Change      : $.%.2f", Change);
	}
	
	else
	{
		printf("\n\n\t'Your Money is not Enough!'\n\n");
	}
	
	printf("\n");
	
	if(Enough == true){
			
    printf("===================================================================================================================== \n");
	
	printf("\t\t\t   Thank you for Buying at Our Store, Don't Forget to Come Again \n");
	
    printf("===================================================================================================================== \n");
	
	}
	
	
	else
	{
			
    printf("===================================================================================================================== \n");
	
	printf("\t\t\t\t   Please Complete Your Transaction, Thank You \n");
	
    printf("===================================================================================================================== \n");
	
	}
	
	


	
	printf("\n\n\n\t\t\t\t\t    Do You Want Buy Some Items Again ?\n\n\n\n");
	printf("\t\t\t\t'Y'(Yes)");
	printf("\t\t\t\t\t'N'(No)");
	
	printf("\n\n\n\n\t\t\t\t\t\t\tAnswer : ");
	scanf("%s", &menu);
	
	printf("\n\n\n");
	
	switch(menu)
	{
	case 'Y' | 'y':
		repeat_cashier = 1;
		break;
	case 'N' | 'n' :
		repeat_cashier = 0;
	default:
		break;
	
	}
	}
	

}
while(repeat_cashier == 1);{
	
	printf("\n\n");
	system("cls");
}
	
printf("\n\n\n\t\t\t\t\t\t   Try to Login Again ?\n\n\n\n");
	printf("\t\t\t\t'Y'(Yes)");
	printf("\t\t\t\t\t'N'(No)");
	
	printf("\n\n\n\n\t\t\t\t\t\t\tAnswer : ");
	scanf("%s", &menu1);
	
	printf("\n\n\n");
	
	switch(menu1)
	{
	case 'Y' | 'y':
		repeat_login = 2;
		break;
	case 'N' | 'n' :
		repeat_login = 0;
	default:
		break;

}
}
while(repeat_login == 2);

}

void main()
{
	// Void Function
	Banner();
	LoginMenu_Cashier();
	
	return 0;
}

