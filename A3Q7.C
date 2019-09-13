#include<stdio.h>

#include<math.h>
void main()
{
float a,b,c,D;
printf("Enter the values");
scanf("%f%f%f",&a,&b,&c);
D=(b*b)-(4*a*c);
float d;
float x1;
float x2;
if(D<0)
{
	d=sqrt(-D)/2*a;
	x1=(-b)/2*a;
	printf("The roots are %f+%fi and %f-%fi",x1,d,x1,d);
	}
else
if(D=0)
{
	x1=-b/2*a;
	printf("The equation has only 1 root=%f",x1);
	}
else
{
	d=sqrt(D);
	x1=(-b+d)/2*a;
	x2=(-b-d)/2*a;
	printf("The two roots are %f and %f",x1,x2);
	}
	
	}

