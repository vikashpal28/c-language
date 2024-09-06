#include<stdio.h>
#include<conio.h>
#include<Windows.h>

void eng_info(char*, char*);

struct engine
{
	char serial[4];
	int yom;
	char mat[50];
	int quantity;
}
maruti[10] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"FF2", 2003, "steel", 23,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14,
"FF3", 2003, "steel", 26,
"FF4", 2005, "Alumininum", 45,
"FF7", 2000, "steel", 90,

};

int main()
{
	char from[5], to[5];
	printf("\nEnter the serial number, from where you want to start the list : ");
	scanf("%s", from);
	printf("\nEnter the serial at which you wan to end the list : ");
	scanf("%s", to);
	system("cls");
	eng_info(from, to);
	_getch();
	return 0;
}

void eng_info(char *from, char *to)
{
	int i;
	printf("\n\t\tEngines Information\n");
	for (i = 0; maruti[i].serial[0] != *from; i++);
	while (1)
	{
		printf("\nSerial Number : %s", maruti[i].serial);
		printf("\nYear Of Manufacture : %d", maruti[i].yom);
		printf("\nMaterail Used : %s", maruti[i].mat);
		printf("\nQuantity : %d\n", maruti[i].quantity);
		if (i == 10)
			i = 0;
		i++;
		if (maruti[i].serial[0] == *to &&  maruti[i].serial[2] == *(to + 2))
		{
			printf("\nSerial Number : %s", maruti[i].serial);
			printf("\nYear Of Manufacture : %d", maruti[i].yom);
			printf("\nMaterail Used : %s", maruti[i].mat);
			printf("\nQuantity : %d\n", maruti[i].quantity);
			return;
		}
	}
}
/*
output

Serial Number : AA0
Year Of Manufacture : 2005
Materail Used : Iron
Quantity : 20

Serial Number : BB1
Year Of Manufacture : 2007
Materail Used : Steel
Quantity : 13

Serial Number : BB2
Year Of Manufacture : 1992
Materail Used : Aluminium
Quantity : 57

Serial Number : FF2
Year Of Manufacture : 2003
Materail Used : steel
Quantity : 23

Serial Number : CC1
Year Of Manufacture : 2005
Materail Used : Stainless Steel
Quantity : 7

Serial Number : CC6
Year Of Manufacture : 2007
Materail Used : Steel
Quantity : 34

Serial Number : CC7
Year Of Manufacture : 2010
Materail Used : Steel
Quantity : 14

Serial Number : FF3
Year Of Manufacture : 2003
Materail Used : steel
Quantity : 26

Serial Number : FF4
Year Of Manufacture : 2005
Materail Used : Alumininum
Quantity : 45

Serial Number : FF7
Year Of Manufacture : 2000
Materail Used : steel
Quantity : 90
*/