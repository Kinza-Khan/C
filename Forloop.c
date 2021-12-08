#include<stdio.h>
#include<conio.h>


int main(){
	
	int r , sp, p, no, n;
	printf("Enter No Of Rows");
	scanf("%d", &no);
	
	for(r=1;r<=no;r++){
		
		for(sp=1;sp<=n;sp++){
			printf(" ");
		}
		n--;
		for(p=1;p<=r;p++){
			printf("*");
		}
		printf("\n");
	}
	
	
	
		int i , j, k, rows;
	printf("Enter No Of Rows");
	scanf("%d", &rows);
	
	for(i=1;i<=rows;i++){

for(j=1;j<=n;j++)	
{
	printf(" ");
	}	
	n--;
	for(k=1;k<=rows;k++){
		printf("*");
	}
	printf("\n");
		
}
		
	

	
getch();
return 0;
}
