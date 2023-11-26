/*C prm to find roots of an equation of the form f(x)=0 */
		  /*USING REGULA-FALSI METHOD*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define err 0.0001
#define Max 20
float f(float x)
{
	float result;
	result=(x*x*x-9*x+1);
	return result;
}
void reg(float *x,float x0,float x1,float fx0,float fx1,int *itr)
{
	*x=x0-((x1-x0)/(fx1-fx0))*fx0;
	++(*itr);
	printf("\nIteration:%d\tx=%7.4f",*itr,*x);
}
int main()
{
	int itr=0;
	float x0,x1,x2,x3;
	printf("Enter the value of x0 & x1\n");
	scanf("%f%f",&x0,&x1);
	if(f(x0)*f(x1)>0)
	{
		printf("\n Input doesnot have soln\n");
		exit(0);
	}
	reg(&x2,x0,x1,f(x0),f(x1),&itr);
	do
	{
		if(f(x0)*f(x2)<0)
		    x1=x2;
		else
		    x0=x2;
		reg(&x3,x0,x1,f(x0),f(x1),&itr);
		


   	if(fabs(x3-x2)<err)
		{
		  printf("\nAfter %d\t",itr);
		  printf("X:%6.4f",x3);
		  exit(0);
		}
		x2=x3;
	}while(itr<Max);
	printf("Iteration are not sufficient\n");
	return 0;
}/*end of main*/

/*OUTPUT:
Enter the value of x0 & x1
2                                                                               
3                                                                               
                                                                                
Iteration:1     x= 2.9000                                                       
Iteration:2     x= 2.9416                                                       
Iteration:3     x= 2.9428                                                       
Iteration:4     x= 2.9428                                                       
After 4 X:2.9428*/

