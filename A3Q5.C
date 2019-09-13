#include<stdio.h>
void main()
{
float a,b,c,m;
printf("Enter the line values a,b,c");
scanf("%f %f %f",&a,&b,&c);
if(b==0)
printf("The line is vertical with slope infinity");
else
{
m=-a/b;
printf("The line is not vertical and the slope is %f",m);
}

}

