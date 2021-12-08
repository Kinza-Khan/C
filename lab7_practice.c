#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){
	int a=42, b=7, c=999;
	int *t=&a;
	int *u=NULL;
	
	printf("%d %d \n",a,*t);
	c=b;
	u=t;
	printf("%d %d\n",c,*u);
	
	a=8;
	b=8;
	printf("%d %d %d %d\n",b,c,*t,*u);
	*t=123;
	printf("%d %d %d %d %d\n",a,b,c,*t,*u);
	
    *t=555; 
      printf("%d %d %d %d %d \n",a,b,c,*t,*u);
	
	c=100;
	printf("%d %d %d %d %d\n",a,b,c,*t,*u);
	
	
	//task 2 fabbionic series:
	
	int n1=0, n2=1,n3,i,number;
	printf("\nEnter number: ");
	scanf("%d",&number);
	printf("\n %d %d \n ",n1,n2);
	for(i=2;i<number;i++){
		
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	
	//task 3

/* 2D array declaration*/
int disp[2][3];
/*Counter variables for the loop*/
int m, j, sum=0;
for(m=0; m<2; m++) {
for(j=0;j<3;j++) {
printf("\nEnter value for employ Salary[%d][%d]:", m, j);
scanf("%d",&disp[m][j]);
}
}

//Displaying array elements
printf("Two Dimensional array elements:\n");
for(m=0; m<2; m++) {
for(j=0;j<3;j++) {
printf("%d ", disp[m][j]);
sum=sum+disp[m][j];

}
printf("\n");

}
printf("\nsum is %d",sum);

	
	

getch();
return 0;



	
}
