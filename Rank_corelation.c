/*C prm to find the rank corelation between two variables*/
#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,n,rx[100],ry[100],di[100],di2[100],sum=0;
	float x[100],y[100],rxy;
	printf("Enter the total no.of observations\n");
	scanf("%d",&n);
	printf("Enter the elements of two sets\n");
	for(i=1;i<=n;i++)
	{
		scanf("%f%f",&x[i],&y[i]);
	}
	for(i=1;i<=n;i++)
	{
		rx[i]=0;
		ry[i]=0;
		for(j=1;j<=n;j++)
		{
			rx[i]+=(((x[i]-x[j])>0)?0:1);
			ry[i]+=(((y[i]-y[j])>0)?0:1);
		}
		di[i]=rx[i]-ry[i];
		di2[i]=pow(di[i],2);
		sum=sum+di2[i];
	}
	rxy=1-((6.0*sum)/(n*(n*n-1)));
	printf("\nX\tY\tR1\tR2\tD\tD^2\n");
	for(i=1;i<=n;i++)
	{
	    printf("%4.3f\t%4.3f\t%2d",x[i],y[i],rx[i]);	    printf("\t%2d\t%2d\t%2d\n\n",ry[i],di[i],di2[i]);
    }
	printf("Sum:%d\n",sum);
	printf("Rank corelation is:%4.6f\n",rxy);
	return 0;
}

/*OUTPUT
Enter the total no.of observations
5
Enter the elements of two sets
3 2
5 6
3 5
2 4
5 4

X       Y       R1      R2      D       D^2
3.000   2.000    4       5      -1       1
5.000   6.000    2       1       1       1
3.00    5.000      4       2       2       4
2.000   4.000    5       4       1       1
5.000   4.000    2       4      -2       4
Sum:11
Rank corelation is:0.450000*/

