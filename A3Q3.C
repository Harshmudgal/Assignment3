#include<stdio.h>
void main()
{
int x,y;
printf("Enter the numbers");
scanf("%d %d",&x,&y);
int big ,small;
if(x>y)
{
big=x;
small=y;
}
else
{
big =y;
small=x;
}
printf("\n %d , %d ",big,small);
}
