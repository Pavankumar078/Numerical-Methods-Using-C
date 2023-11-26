/*C prm to find the roots of an equation of the form f(x)=0*/
   /* USING NEWTON RAPHSON'S METHOD*/
#include<stdio.h>
#include<math.h>
#define err 0.000001
float f(float x)
{
	float result;
	result=(x*x*x-9*x+1);
	return(result);
}
float f1(float x)
{
	float result;
	result=(3*x*x-9);
	return result;
}
int main()
{
	int i;
	float F[10],F1[10],X[10];
	float p;
	printf("Enter the initial value\n");
	scanf("%f",&p);
	X[1]=p;
	for(i=1;i<=20;i++)
	{
		F[i]=f(X[i]);
		F1[i]=f1(X[i]);
		X[i+1]=X[i]-(F[i]/F1[i]);
		if(fabs(X[i+1]-X[i])<err)
		{
		  printf("Required root is:%f\n",X[i]);
		  break;
		}
		printf("Ieration %d\t x:%f\n",i,X[i+1]);
	}
	return 0;
}




/*OUTPUT:
Enter the initial value
3                                                                               
Ieration 1       x:2.944444                                                     
Ieration 2       x:2.942822                                                     
Ieration 3       x:2.942820                                                     
Required root is:2.942820 */
