#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
 float balance=1000, cash_in, cash_out;
 int deducted;
 int i;
 main:
 clrscr();
 printf("E-Wallet");
 printf("\n1. recive e-money");
 printf("\n2. sending e-money");
 printf("\n3. Check Balance");
 printf("\n4. Exit");
 printf("\nSelect Option: ");
 scanf("%s",&option);
 switch(option)
 {
	//case 1 means if we input 1 the code will read this case
	case '1':
	clrscr();
	printf("recive e-money");
	printf("\n\nEnter amount: ");
	scanf("%f",&cash_in);
	clrscr();
	balance+=cash_in;
	printf("Successfully Added!");
	getch();
	goto main;
	//now we can erase this "break;" if we put goto function at the end of
	//the code.

	case '2':
	clrscr();
	printf("sending e-money");
	printf("\n\nEnter amount: ");
	scanf("%f",&cash_out);
       if(balance - cash_out>=0)
         {
	if(cash_out<=1)&&(cash_out>1000)
	{
		
                clrscr();
                deducted=0;
		balance-=(cash_out-deducted);
		printf("Successfully Cash Out!");
		getch();
		goto main;
	}
        elseif(cash_out<=10000)&&(cash_out>=100000)
                {
		
                clrscr();
                deducted=200;
		balance-=(cash_out-deducted);
		printf("Successfully Cash Out!");
		getch();
		goto main;
	}
          
         }
        elseif(cash_out<=100000)
                {
		
                clrscr();
                deducted=1000;
		balance-=(cash_out-deducted);
		printf("Successfully Cash Out!");
		getch();
		goto main;
	}
	else
	{
		clrscr();
		printf("Insufficient Balance!");
		getch();
		goto main;
	}

	case '4':
	clrscr();
	printf("BALANCE INQUIRY");
	printf("\n\nCurrent Balance: %.2f",balance);
	getch();
	goto main;

	case '5':
	//in order to use this exit(0) you need to import a protoype.
	exit(0);
	break;

	//default is executed when user inputed an input that's not in the option
	default:
	clrscr();
	printf("Invalid Option!");
	getch();
	goto main;
 }
getch();
}