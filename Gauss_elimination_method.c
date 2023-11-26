/*C prm to solve system of equations using Gauss Elimination metod*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a[3],b[3],c[3],d[3],r1,r2,x,y,z;
	int i;
printf("Enter the coefficients of 3equations\n");
	for(i=1;i<=3;i++)
	{
	   scanf("%f%f%f%f",&a[i],&b[i],&c[i],&d[i]);
	}
	printf("Equations are: \n");
	for(i=1;i<=3;i++)
	{	                                                               
		printf("%.2fX+(%.2f)Y+(%.2f)Z=%.2f\n",a[i], b[i],c[i],d[i]);
	}
	for(i=1;i<3;i++)
	{
		r1=a[i+1]/a[1];
		a[i+1]=(a[i+1]-r1*a[1]);
		b[i+1]=(b[i+1]-r1*b[1]);
		c[i+1]=(c[i+1]-r1*c[1]);
		d[i+1]=(d[i+1]-r1*d[1]);
	}
	for(i=2;i<3;i++)
	{
		r2=b[i+1]/b[2];
		b[i+1]=(b[i+1]-r2*b[2]);
		c[i+1]=(c[i+1]-r2*c[2]);
		d[i+1]=(d[i+1]-r2*d[2]);
		z=d[i+1]/c[i+1];
		y=(d[i]-(z*c[i]))/b[i];
		x=(d[i-1]-(z*c[i-1])-(y*b[i-1]))/a[i-1];
	}
	printf("X=%.2f\tY=%.2f\tZ=%.2f\n",x,y,z);
	return 0;
}

/*OUTPUT:
Enter the coefficients of 3 equations
4 1 3 11                                                                        
3 4 2 11                                                                        
2 3 1 7                                                                         
Equations are:                                                                  
4.00X+(1.00)Y+(3.00)Z=11.00                                                     
3.00X+(4.00)Y+(2.00)Z=11.00                                                     
2.00X+(3.00)Y+(1.00)Z=7.00                                                      
X=1.00  Y=1.00  Z=2.00 */

