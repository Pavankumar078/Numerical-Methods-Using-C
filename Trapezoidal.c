/*C program to find the integral of a function
using Trapezoidnal rule*/
#include<stdio.h>
#include<math.h>
float y(float x)
{
	return(1/(1+(x*x)));
}
int main()
{
	float x0,xn,h,s;
	int i,n;
	printf("Enter the intervals\n");
	scanf("%f%f",&x0,&xn);
	printf("No of intervals are:\n");
	scanf("%d",&n);
	h=(xn-x0)/n;
	s=y(x0)+y(xn);
	for(i=1;i<n;i++)
	{
		s+=2*y(x0+(i*h));
	}
	printf("\nValue of integral=%6.4f\n",(h/2)*s);
	return 0;
}
/*OUTPUT:
Enter the intervals
0                                                                               
1                                                                               
No of intervals are:                                                            
10                                                                              
                                                                                
Value of integral=0.7850*/

