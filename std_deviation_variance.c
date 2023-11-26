/*C prm to find the standard deviation & vaiance*/
#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	float n=0,sd,Am=0,sumq=0,sum=0;
	float x[10],f[10],var,l1=0,u1=0,diff=0;
	printf("Enter the lower limit difference &      upper limt\n");
	scanf("%f%f%f",&l1,&diff,&u1);
	printf("Enter the frequencies\n");
	for(x[i]=l1;x[i]<=u1;x[i]=x[i]+diff)
	{
		scanf("%f",&f[i]);
		sumq=sumq+((x[i]*x[i])*f[i]);
		sum=sum+(x[i]*f[i]);
		n=n+f[i];
	}
	printf("Sum=%7.2f\tn=%7.2f",sum,n);
	Am=sum/n;
	sd=pow(((sumq/n)-(Am*Am)),0.5);
	var=sd*sd;
	printf("\nMean is:%.2f",Am);
	printf("\nStandard deviation is:%.2f",sd);
	printf("\nThe variance:%.2f",var);
	return 0;
}
/*OUTPUT:
Enter the lower limit difference & upper limt
12                                                                              
1                                                                               
19                                                                              
Enter the frequencies                                                           
1 0 4 12 20 15 6 2                                                                                                                                                                                                                                                                                                                                                                                             Sum= 969.00     n= 60.00                                                       
Mean is:16.15                                                                   
Standard deviation is:1.29                                                      
The variance:1.66*/
