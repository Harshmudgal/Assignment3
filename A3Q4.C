#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the sides");
scanf("%d %d %d",&a,&b,&c) ;
if(a*a==b*b+c*c)
printf("Angle a is 90 degree");
else
printf("Anfle a is not 90 degree");
}
