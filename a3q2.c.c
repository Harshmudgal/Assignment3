#include<stdio.h>
void main()
{
int x,y,z,a,big;
printf("Enter the numbers");
scanf("%d %d %d %d ",&x,&y,&z,&a);
if(x>y)
{
if(z>x)
{
big=z;
}
else
{
big=x;
}
}
else
{
if(y>z)
big=y;
else
big=z;
}
if(big>a)
printf("The biggest is %d",big);
else 
printf("The biggest is %d",a);
}

