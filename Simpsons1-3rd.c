/*C a program to find integral of a function using
Simpson's 1/3rd rule*/
#include<stdio.h>
#include<math.h>
float y(float x)
{
	return(x*x/(1+(x*x*x)));
}
int main()
{
	float x0,xn,h,s;
	int i,n;
	printf("Enter the intervals\n");
	scanf("%f%f",&x0,&xn);
	printf("Enter the no.of intervals\n");
	scanf("%d",&n);
	h=(xn-x0)/n;
	s=y(x0)+y(xn)+4*y(x0+h);
	for(i=3;i<n;i++)
	{
		s=s+4*y(x0+(i*h))+2*y(x0+(i-1)*h);
	}
	printf("\nValue of the integral:%6.4f",(h/3)*s);
	return 0;
}
/*OUTPUT:
Enter the intervals
0                                                                               
1                                                                               
Enter the no.of intervals
4                                                                               
                                                                                
Value of the integral: 0.2311*/
