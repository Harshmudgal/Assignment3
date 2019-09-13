#include<stdio.h>

#include<math.h>
void main()
{
	float p,q,r,a,b,c;
	printf("Enter the centre and radii of circle and the line equation in ax+by+c format");
	scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
	float d=(a*p+q*b+c)/sqrt(a*a+b*b);
	if(d<r)
	{
