#include<stdio.h>
#include<math.h>


int main(){
	
	//task 1
	
	int i=0 ,j=0, k=0;
	k=(j+13)/27;
	while(1){
		if(k>10){
			break;
		}
		else{
			k=k+1;
//			i=3*k-1;
			printf("\n%d",k);
		}
	}


//task 2
int start, end=1;
printf("Enter the value of start :");
scanf(" %d",&start);
printf("%d \n:",start);

while(end<=start){
	if(end%2==0){
		printf("%d ",end);
	}
	end++;
}

//task 3

int phy, chem, math, eng, urdu , omarks;
float percentage;
printf("Enter marks of physics :");
scanf("%d",&phy);
printf("Enter marks of chemistry :");
scanf("%d",&chem);
printf("Enter marks of maths :");
scanf("%d",&math);
printf("Enter marks of eng :");
scanf("%d",&eng);
printf("Enter marks of urdu :");
scanf("%d",&urdu);

omarks=(phy+chem+math+eng+urdu);
printf("\n  Total marks %d = ",omarks);
percentage=(omarks/500.00)*100;
printf("\npercentage is %.2f:",percentage);
if(percentage>=95){
	printf("\nExtra Ordinary");
}
else if(percentage>=80 && percentage<95){
	printf("Distinction");
}
else if(percentage>=65 && percentage<80){
	printf("First Division");
}
else if(percentage>=55 && percentage<65){
	printf("Second Division");
}
else if(percentage>=40 && percentage<55){
	printf("third division");
}
else if(percentage<40){
	printf("You are fail");
}

//task4

int z, n;
int t1 = 0, t2 = 1;
int nextTerm = t1 + t2;
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci Series: %d, %d, ", t1, t2);
for (z = 3; z <= n; ++z) {
printf("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
//task
char ch;
int ascii;
printf("Enter a character\n");
scanf("%c",&ch);
ascii=ch;
printf("ascii value of %c is %d\n",ch ,ascii);
if(ascii>=65 && ascii<=90)
printf("%c is a capital letter\n",ch);
else if(ascii>=97 && ascii<=122){
	printf("%c is a small letter",ch );}
else if(ascii>=48 && ascii<=57){
		printf("%c is a digit",ch);
		
	}
	else if(ascii>=0 && ascii<=47 || ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127 )
printf("%c is a special character",ch);

//task
float liters,km,liters_per_100km,avg=0;
printf("Enter liters used:");
scanf("%f",&liters);
while(liters!=-1){
	printf("Enter kilometer you travelled:");
	scanf("%f" ,&km);
	liters_per_100km=(liters/km)*100;
	printf("Liters per 100 km is %f\n",liters_per_100km);
	avg++;
}
	return 0;
}
