#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
//lab5 task1	
	int num1,num2,add,sub,mul,div,res;
	printf("Enter  numbers to perform operation\n");
	scanf("%d %d",&num1,&num2);
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;

	printf("\n Addition %d",add);
	printf("\n Subtraction %d",sub);
	printf("\n Multiplication %d",mul);
	printf("\n Division %d",div);


//by using switch	
	printf("\nEnter  numbers  to perform operation\n");
	scanf("%d %d",&num1,&num2);
	printf("\nPress 1 for Addition");
	printf("\nPress 2 for Subtraction");
	printf("\nPress 3 for Multiplication");
	printf("\nPress 4 for Division\n");
	
	scanf("%d",&res);
	
	switch(res){
		case 1: res=num1+num2;
			printf("\n%d",res);
			break;
			case 2:res=num1-num2;
			printf("\n%d",res);
			break;
			case 3: res=num1*num2;
			printf("\n%d",res);
			break;
		case 4: res=num1/num2;
		printf("\n%d",res);
		break;
		default:
			printf("\nSorry u have entered wrong value");
	}

//task 2 swap the two  variables without using third variable
//
	int a, b;
	printf("\nEnter variables For swapping ");
	scanf("%d %d",&a,&b);
	printf("Before Swaping %d and %d\n",a,b);
	a=a+b;//a=10+20=30
	b=a-b;//b=30-20=10;
	a=a-b;//a=30-10=20;
	printf("\nAfter Swaping %d %d",a,b);
	
	
// write a program to take perp and base of Right angled triangle and find third side of triangle
//by using hypot function and also use math.h library include
   double base,perp;
	double hyp;
	
	printf("\nEnter the values of Base and perpendicular");
	scanf("\n %lf %lf",&base,&perp);
	hyp= hypot(base,perp);
	printf("\n  %.2lf", hyp);
	
	//by using pow(power function)
	double bs,per;
    printf("\nEnter the values of Base and perpendicular");
	scanf("\n %lf %lf",&bs,&per);
    double h=pow(bs,2)+pow(per,2);
    printf("hypoteneus is %.2f",sqrt(h));
    
    //by using defined function
    
    double  bas,p,hypp;
    printf("\nEnter the values of Base and perpendicular");
	scanf("\n %lf %lf",&bas,&p);
	hypp=(p*p)+(bas*bas);
	
	printf("hyptenus is %2f",sqrt(hypp));
	
	//area of triangle
	
	double basee,perpendicular , area;
	printf("Enter base and perpendicular to find area of triangle");
	scanf("\n %lf %lf",&basee,&perpendicular);
	area=(basee*perpendicular)/2;
	printf("area is %.2f\n",area);
	
	//perimeter of the triangle sum of all sides
	
	double B,P,H,SUM;
	printf("\nenter base hypotenus and perpendicular of right angle triangle");
	scanf("\n %lf %lf %lf",&B,&P,&H);
	SUM=B+P+H;
	printf("Perimeter is  %.3f",SUM);
	
	
	//task4 design basic arithmetic and geometry calculator 
	 
	float s,q, result;
	int r;
	printf("select operation by number\n1:square\n2:squareroot\n3:log\n4Areaof square\n5:Area of rectangle\n6:Area of triangle:\n7area and circumference of circleArea of Triangle\n  ");
	scanf("%d",&r);
	switch (r) {
		case 1:
		printf("Enter variable for square\n");
		scanf("\n%f",&s);
		result=s*s;
		printf("Square of numbers is %f",result);
		break;
		
		case 2:
		printf("Enter variable for squareroot\n");
		scanf("%f",&s);
		result=sqrt(s);
		printf("Squareroot of numbers is %f",result);
		break;
		
		case 3:
			printf("Enter variable for log\n");
			scanf("%f",&s);
			result=log(s);
			printf("the value of log %f",result);
			break;
			
			case4:
				printf("Enter variable for area of the square \n");
			scanf("%f",&s);
			result=s*s;
			printf("the area of the square %f",result);
			break;
				
			case 5:
			printf("Enter height and width of rectangle\n");
			scanf("%f %f",&s,&q);
			result=s*q;
			printf("area of rectangle %f",result);
			break;
			
			case 6:
			printf(" To find the area of trinagle Enter base and height of triangle\n");
			scanf("%f %f",&s,&q);
			result=(s*q)/2;
			printf("area of triangle %f",result);
			break;
			
			case 7:
				printf("To find the area and circumference of circle enter the value of radius");
				scanf("%f",&s);
				result=3.142*s*s; //area of circle
				q=2*3.142*s; //circumference of circle
				
				printf("area of circle is %f and circumfernce of circle is %f",result,q);
				
				break;
	}
	
	
	
	
	
	
	
	

    
	
		
		

	


	
	getch();
	return 0;
}
