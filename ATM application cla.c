#include<stdio.h>
int main()
{
	int pin=1234;
	int epin,choice;
	float balance=5000;
	float amount;
	printf("enter your pin:");
	scanf("%d",epin);
	if(pin!=epin)
	{
		printf("incorrect pin");
		return0;
	}
	else
	{
		printf("login sucessfull");
	}
	printf("=============ATM application==============");
	printf("1> Check the balance\n");
	printf("2> Withdraw the amount\n");
	printf("3>  Deposit the amount");
	printf("4> Exit\n");
	printf("Enter your choice");
	scanf("%d",choice);
	switch(choice)
	{
		default:
			printf("Invalid choice\n");
			break;
	    case1:
	        printf("Your balance=%2f",balance);
	        break;
	    case2:
	    	printf("Enter your amount:");
	    	scanf("%f",&amount);
	    	if(amount=<0||amount>balance)
	    	{
	    		printf("Invalid amount\n");
			}
			else
			{
				balance=balance-amount;
			    printf("Collect your amount=%f",amount);
		    }
		    break;
		case3
		    printf("Enter your deposit amount:");
		    scanf("%f",&amount);
		    if(amount=<0)
		    {
		    	printf("Invalid amount\n");
	    	}
		    else
		    {
		    	balance=balance+amount;
		    	printf("your balance=%f",balance)
			}
			break;
			case4:
				printf("Thankyou for using atm:");
				exit;
				break;
}
			
			
