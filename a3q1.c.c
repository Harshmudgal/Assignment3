#include<stdio.h>
void main()
{
int x,y,z;
printf("Enter the numbers");
scanf("%d %d %d ",&x,&y,&z);
if(x>y)
{
if(z>x)
{
printf("The biggest number is %d",z);
}
else
{
printf("The biggest nuumber is %d",x);
}
}
else
{
if(y>z)
printf("The biggest number is %d",y);
else
printf("The biggest number is %d",z);
}
}

