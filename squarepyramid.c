#include<stdio.h>
#include<conio.h>

int main()
{
	
	int Trows,rows,col;
	printf("Enter nO of row \n");
	scanf("%d",&Trows);
	
	for(rows=1;rows<=Trows;rows++){
		
		for(col=1;col<=Trows;col++){
			printf("*");
			
		}
	
		printf("\n");
		
	}
	
	
	
	

	
getch();
return 0;	
}
