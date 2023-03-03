#include<stdio.h>
int tenTh(int);
int oneTh(int);
int hun(int);
int ten(int);
int switchfuncTens(int);
int switchfuncOnes(int);
int switchfuncTenAbv(int);
int digit(int);
int main()
{	
	printf("!!!Welcome to the program!!!\n");
	printf("This program prints the given number in words.\n");
	int n = 0;
	printf("Enter any number: ");
	scanf("%d",&n);
	int backup = n ;
	printf("%d = ",n);
	if(n >= 10000)
	{
		n = tenTh(n);
	}
	
	if (backup/10000!=1)
	{	
		if(n>=1000)
		{
			n = oneTh(n);	
			printf("Thousand ");	
		}
		
	}
	
	int oneTh = n/1000;
	n = n - (oneTh * 1000);
	
	if(n>=100)
	{
		n = hun(n);
	}
	
	if(n>=10)
	{
		n = ten(n);
	}
	
	switchfuncOnes(n);
}

int tenTh(int n )
{
	int tenTh = n/10000;
	int new = n - (tenTh * 10000);
	if (tenTh==1)
	{
		tenTh = n/1000;
		switchfuncTenAbv(tenTh);
		printf("Thousand ");
		return(new);
	}
	switchfuncTens(tenTh);
	return(new);

}

int oneTh(int n )
{
	int oneTh = n/1000;
	int new = n - (oneTh * 1000);
	switchfuncOnes(oneTh);
	return(new);

}

int hun(int n)
{
	int hun = n/100;
	int new = n - (hun * 100);
	switchfuncOnes(hun);
	printf("Hundred ");
	return(new);
}

int ten(int n)
{
	int ten = n/10;
	int new = n - (ten * 10);
	if(ten==1)
	{
		switchfuncTenAbv(ten);
		return(new);
	}
	switchfuncTens(ten);
	return(new);

}

int switchfuncTens(int n)
{
	switch(n)
	{
		case 2: printf("Twenty ");
		break;
		case 3: printf("Thirty ");
		break;
		case 4: printf("Fourty ");
		break;
		case 5: printf("Fifty ");
		break;
		case 6: printf("Sixty ");
		break;
		case 7: printf("Seventy ");
		break;
		case 8: printf("Eighty ");
		break;
		case 9: printf("Ninety ");
		break;
	}
}

int switchfuncOnes(int n)
{
	switch(n)
	{
		case 1: printf("One ");
		break;
		case 2: printf("Two ");
		break;
		case 3: printf("Three ");
		break;
		case 4: printf("Four ");
		break;
		case 5: printf("Five ");
		break;
		case 6: printf("Six ");
		break;
		case 7: printf("Seven ");
		break;
		case 8: printf("Eight ");
		break;
		case 9: printf("Nine ");
		break;
		
	}
}

int switchfuncTenAbv(int n)
{
	
	switch(n)
	{
		case 10: printf("Ten ");
		break;
		case 11: printf("Eleven ");
		break;
		case 12: printf("Twelve ");
		break;
		case 13: printf("Thirteen ");
		break;
		case 14: printf("Fourteen ");
		break;
		case 15: printf("Fifteen ");
		break;
		case 16: printf("Sixteen ");
		break;
		case 17: printf("Seventeen ");
		break;
		case 18: printf("Eighteen ");
		break;
		case 19 : printf("Nineteen ");
		break;
	}
}

