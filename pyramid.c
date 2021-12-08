#include<stdio.h>
#include<conio.h>


int main(){
	
	int trows, rows, space, num;
	printf("Enter No Of Rows \n");
	scanf("%d",&trows);
	for(rows=1;rows<=trows;rows++){
		
		
		//print spaces
		
		for(space=1;space<=(trows-rows);space++){
			printf(" ");
			
		}
		//print stars
		
		for(num=1;num<=((2*rows)-1);num++){
			printf("*");
		}
		
		printf("\n");
		
	}
	
	getch();
	return 0;
	
}
