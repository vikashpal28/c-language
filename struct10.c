#include<stdio.h>
#include<conio.h>
#include<Windows.h>

/*Function to perform withdrawal or deposition*/
void action(int, int, int);

/*Print the balance below 100 Rs.*/
void below1000();

struct acc_holder
{
	long int acc_num;
	char name[30];
	int bal;
} bob[200] = { 1, "Siraj", 1000000,
2, "Azad", 1233044,
3, "Deepak", 99,
4, "Rihan", 33,
5, "Rahul Khowal", 200000,
6, "vikash", 2000,
7, "vijay", 400
};

int main()
{
	int accnum, amount, code;
	printf("\nEnter your account number : ");
	scanf("%d", &accnum);
	printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
	action(accnum, amount, code);
	_getch();
	system("cls");
	printf("All members with account balance less than 1000 are following : ");
	below1000();
	_getch();
	return 0;
}

void below1000()
{
	int i;
	for (i = 0; i < 200; i++)
	{
		if (bob[i].bal < 1000 && bob[i].bal > 0)
		{
			printf("\nName : %s", bob[i].name);
			printf("\nAccount Number : %d\n\n", bob[i].acc_num);
		}
	}
}

void action(int accnum, int amount, int code)
{
	int i;
	for (i = 0; i < 200; i++)
		if (bob[i].acc_num == accnum)
			break;
	if (!code)
	{
		if (bob[i].bal - amount < 1000)
		{
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else
		{
			bob[i].bal -= amount;
			printf("\nYour new account balance is : %d", bob[i].bal);
		}
	}
	else
	{
		bob[i].bal += amount;
		printf("\nYour new account balance is : %d", bob[i].bal);
	}

}
/*
output
Enter your account number : 2
Enter 1 for deposit and 0 for withdrawal : 1

Enter amount to be deposit : 1000

Your new account balance is : 1234044

All members with account balance less than 1000 are following :
Name : Deepak
Account Number : 3


Name : Rihan
Account Number : 4


Name : vijay
Account Number : 7
*/