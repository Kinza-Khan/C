#include<stdio.h>
#include<conio.h>

int main()
{
	
	int Trows,rows,col, space;
	printf("Enter nO of row \n");
	scanf("%d",&Trows);
	
	for(rows=1;rows<=Trows;rows++){
		for(space=1;space<=(Trows-rows);space++){
			printf(" ");
			
		}
		
		for(col=1;col<=rows;col++){
			printf("*");
			
		}
		printf("\n");
		
	}
	
	
//		int Trows,rows,col, space;
	printf("Enter nO of row \n");
	scanf("%d",&Trows);
	
	for(rows=1;rows<=Trows;rows++){
		
		for(space=1;space<=(Trows-rows);space++){
			printf(" ");
			
		}
		
		for(col=rows;col<=Trows;col++){
			printf("*");
			
		}
		printf("\n");
		
	}
	
getch();
return 0;	
}
