#include <stdio.h>

void isValid(int grid[9][9])
{
	int p =9, count =0, i =0;
	
	//for Row checking
	for(int i = 0; i<p ; i++)
	{
		
		for(int j =0; j<p; j++)
		{
			count=0;
			if(grid[i][j]!=0)
			{
					for(int n =0; n<p; n++)
					{
						if(grid[i][j]==grid[i][n])
						{
							count++;
						}
					}
				if(count>1)
				{
					printf("The Sudoku is invalid.");
					return;
				}
			}
		}
	}
	//for Column checking
	for(int i = 0; i<p ; i++)
	{
		
		for(int j =0; j<p; j++)
		{
			count=0;
			if(grid[j][i]!=0)
			{
					for(int n =0; n<p; n++)
					{
						if(grid[j][i]==grid[n][i])
						{
							count++;
						}
					}
				if(count>1)
				{	
					printf("The Sudoku is invalid.");
					return;
				}
			}
		}
	}
	
	//for sub-boxes checking
	for(int a =0; a<p; a=a+3)
	{
		for(int c=0; c<p; c=c+3)
		{
			for(int i =a; i<a+3; i++)
			{
				for(int j =c; j<c+3; j++)
				{
					count =0;
					if(grid[i][j]!=0)
					{
						for(int m =a; m<a+3; m++)
						{
							for(int n =c; n<c+3; n++)
							{
								if(grid[i][j]==grid[m][n])
								{
									count++;
								}
							}
						
						}
					}
					if(count>1)
					{	
						printf("The Sudoku is invalid.");
						return;
					}
				}		
	
			}
		
		}
	}
	printf("The Sudoku is Valid.\n");
}

int main()
{
  int grid[9][9]= {{5,3,0,0,7,0,0,0,0},{6,0,0,1,9,5,0,0,0},{0,9,8,0,0,0,0,6,0},{8,0,0,0,6,0,0,0,3},{4,0,0,8,0,3,0,0,1},{7,0,0,0,2,0,0,0,6},{0,6,0,0,0,0,2,8,0},{0,0,0,4,1,9,0,0,5},{0,0,0,0,8,0,0,7,9}};
  isValid(grid);
}
