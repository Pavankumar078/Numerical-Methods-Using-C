/*C prm to implement Gauss siedel Method*/
#include<stdio.h>
#include<math.h>
#define err 0.0001
#define Max 20
int main()
{
	int i,j,m,n;
	float x[10],a[10][10],b[10],c[10],d[10];
	printf("No of unknowns\n");
	scanf("%d",&n);
	repeat:
	printf("Enter the coefficients\n");
	for(i=0;i<n;i++)
	{
	     x[i]=d[i]=0;
	     for(j=0;j<n;j++)
	     {
		    scanf("%f",&a[i][j]);
		    if(i!=j)
		    d[i]=d[i]+a[i][j];

	     }
	     if(a[i][i]<=d[i])
	     {
printf("\nGiven coefficient of matrix is not diagonally dominant\n");
		     goto repeat;
	      }
	}
	printf("\nEnter the constants\n");
	for(i=0;i<n;i++)
	  scanf("%f",&b[i]);
	m=0;
	printf("\nIterations\t");
	for(i=0;i<n;i++)
	  printf("x(%d)\t\t",i+1);
	ref:
	for(i=0;i<n;i++)
	   d[i]=x[i];
	m=m+1;
	for(i=0;i<n;i++)
	{
	    c[i]=b[i];
	    for(j=0;j<n;j++)
	    {
		if(i!=j)
		   c[i]=c[i]-(a[i][j]*x[j]);
		x[i]=c[i]/a[i][i];
	    }
	}
	printf("\n\t%d\t",m);
	for(i=0;i<n;i++)
	{
	    printf("%f\t",x[i]);
	}
	for(i=0;i<n;i++)
	{
	    if((m<Max)&&fabs(d[i]-x[i])>err)
	    {
		goto ref;
	    }
	}
	if(m>=Max)
	  printf("\nItr=erations are not sufficient\n");
	return 0;
}/*end of main*/
/*OUTPUT:
No of unknowns
3
Enter the coefficients
10 1 -2
1 12 3
3 4 15
Enter the constants
7.74 39.66 54.8
Iterations      x(1)            x(2)            x(3)
	1       0.774000        3.240500        2.634400
	2       0.976830        2.564997        2.773968
	3       1.072294        2.522150        2.766301
	4       1.075045        2.523837        2.765301
	5       1.074677        2.524118        2.765300
	6       1.074648        2.524121        2.765305 */

