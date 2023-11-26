/*C prm to find roots of an equation of the form f(x)=0 */
		  /*USING BISECTION METHOD*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define err 0.0001
#define Max 20
int itr=1;
float x1=0,y=0;
float f(float x)
{
	float result;
	result=(x*x*x-9*x+1);
	return result;
}
void bisection(float *x,float p,float q)
{

	*x=(p+q)/2;
	printf("\nIteration:%d\tx=%7.5f\n",itr,*x);
	if(f(p)*f(*x)<0)
	    q=*x;
	else
	    p=*x;
	while(itr<=Max)
	{
		if(fabs(y-*x)<err)
		{
		   printf("\nAfter %diteration x=%6.4f\n",itr,x1);
		   exit(0);
		}
		else
		{
		   y=x1;itr++;
		   bisection(&x1,p,q);
		}
	}
	printf("Iterations are not sufficient\n");
}

int main()
{
	float x,lb,ub;
	printf("Enter the intervals\n");
	scanf("%f%f",&lb,&ub);
	if(f(lb)*f(ub)>0)
	{
		printf("Roots are not lie in this  interval\n");
		exit(0);
	}
	bisection(&x,lb,ub);
	return 0;
}
/*OUTPUT:
Enter the intervals
2
3
Iteration:1     x=2.50000
Iteration: 2     x=2.75000
Iteration: 3     x=2.87500
Iteration: 4     x=2.93750
Iteration: 5     x=2.96875
Iteration: 6     x=2.95312
Iteration: 7     x=2.94531
Iteration: 8     x=2.94141
Iteration: 9     x=2.94336
Iteration: 10    x=2.94238
Iteration: 11    x=2.94287
Iteration: 12    x=2.94263
Iteration: 13    x=2.94275
Iteration: 14    x=2.94281
After 14iteration x=2.9428*/
