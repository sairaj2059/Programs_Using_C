#include<stdio.h>

int hanoi(int ndisc, int source, int dest, int temp )
{
	int n = 1;
	
	if(ndisc==1)
	{
		printf("Shift disc%d from %d to %d.\n",n, source, dest );
		return(n+1);
	}
	
	n= hanoi(ndisc-1, source, temp, dest);
	printf("Shift disc%d from %d to %d.\n",n,source, dest);
	
	hanoi(ndisc-1,temp, dest, source);
	return(n+1);
}
int main()
{
	int ndisc=0, source= 0, dest=0, temp=0;
	printf("!!!Welcome to the program!!!\n");
	printf("This program prints the steps of creating towers of Hanoi.\n");
	printf("Enter no. of disc: ");
	scanf("%d",&ndisc);
	printf("Enter the source poll: ");
	scanf("%d",&source);
	printf("Enter the destination poll: ");
	scanf("%d",&dest);
	printf("Enter the temporary poll: ");
	scanf("%d",&temp);
	
	hanoi(ndisc,source, dest, temp);

}


