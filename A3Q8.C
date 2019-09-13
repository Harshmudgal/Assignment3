#include<stdio.h>

#include<math.h>
void main()
{
int x,y,z;
printf("Enter 2 same and 1 different number");
scanf("%d %d %d",&x,&y,&z);
if(x==y)
printf("The differnet number id %d",z);
else if(x==z)
printf("The different number is %d",y);
else if(y==z)
printf("The different number is %d",x);
else
printf("All three numbers are different");

}
