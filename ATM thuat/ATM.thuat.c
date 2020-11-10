#include <stdio.h>
int user, pass;
int balance, id, num, amount, selection;
balance = 1000;
id = 100;
char ans;
int main ()
{
	printf("\n Wellcome FPT bank");
	printf("\n Enter your usename: ");
	scanf("%d", &user);
	printf("\n Enter your password: ");
	scanf("%d", &pass);
	
	if (check(user, pass) == 1)
	{
		do{
		menu(selection);
		printf("\n");
		scanf("%d", &selection);
		switch(selection)
		{
			case 1:
				printf("\n Enter your amount: ");
				scanf("%d", &amount);
				withdraw(balance, amount);
				break;
			case 2:
				printf("\n Enter ID: ");
				scanf("%d", &id);
				printf("\n Enter your num: ");
				scanf("%d", &num);
				transfer(balance, num);
				break;
			case 3:
				look(balance);
				break;
			case 4:
				printf("Thank you for your services");
				exit(0);
				break;
		}
		printf("\n Do you want to continue? Y/N");
		fflush(stdin);
		scanf("%c", &ans);
		}
		while (ans == 'Y');
		printf("\n Thank you for your services");
	}
	else
	printf("\n Check username and password, again");
}

int check(int user, int pass)
{
	if (user == 2701 && pass == 1990)
	{
		return 1;
	}
	else
		return 0;
}

int menu(int selection)
{
	printf("\n 1.Withdraw");
	printf("\n 2.Transfer");
	printf("\n 3.Check balance");
	printf("\n 4.Stop");
}

int withdraw(int balance, int amount)
{
	if (amount % 5 == 0 && amount <= 100 && amount <= balance)
	{
		balance = balance - amount;
		printf("\n Your withdrawal is successful : %d", amount);
	}
	else
	printf("\n Invalid amount");
}

int transfer(int balance, int num)
{
	int id = 1234;
	if (num > 0 && num <= balance)
	{
		balance = balance - num;
		printf("\n Your transfer is successful %d to ID%d", num, id);
	}
	else
	printf("\n Invalid num");
}

int look(int balance)
{
	printf("\n Your balance is: %d", balance);
}
