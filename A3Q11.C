#include<stdio.h>

void main()
{
	int x,y,z;
	printf("Enter the numbers");
	scanf("%d%d%d",&x,&y,&z);
	int mid;
	if(x>z)
		{
			if(x<y)
			mid=x;
			else
			if(y>z)
			mid=y;
			else
			mid=z;
			}
	else
		{
			if(z<y)
			mid=z;
			else
			if(y>x)
			mid=y;
			else
			{
			mid=x;
			}
			}
       printf("The middle number is %d",mid);
     
       }














