/*C prm to find the Karl person correlation coefficient between two variables*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	float x[20],y[20],s1=0,s2=0,s3=0,s4=0,s5=0;
	float r=0,b=0,c=0,d=0,cr=0;
	printf("Enter the number of observations\n");
	scanf("%d",&n);
	printf("Enter the variable x&y\n");
	for(i=0;i<n;i++)
	{
	    scanf("%f%f",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		s1=s1+x[i];
		s2=s2+y[i];
		s3=s3+(x[i]*x[i]);
		s4=s4+(y[i]*y[i]);
		s5=s5+(x[i]*y[i]);
	}
	r=(n*s5)-(s1*s2);
	b=(n*s3)-(s1*s1);
	c=(n*s4)-(s2*s2);
	d=sqrt(b)*sqrt(c);
	cr=r/d;
	printf("\ncr:%f\n",cr);
	return 0;
}
/*OUTPUT:
Enter the number of observations
3                                                                               
Enter the variable x&y                                                          
1 2                                                                             
5 4                                                                             
3 6                                                                             
                                                                                
cr:0.500000*/

