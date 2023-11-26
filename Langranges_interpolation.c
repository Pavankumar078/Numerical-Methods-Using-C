/*C prm on Langrage's Interpolation*/
#include<stdio.h>
#include<math.h>
#define Max 100
int main()
{
	float ax[Max],ay[Max],nr,dr,x,y=0;
	int i,j,n;
	printf("\nNo of observation:\n");
	scanf("%d",&n);
	printf("Enter the set of values of x&y\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&ax[i],&ay[i]);
	}
	printf("enter the value of x\n");
	scanf("%f",&x);
	for(i=0;i<n;i++)
	{
		nr=dr=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				nr*=x-ax[j];
				dr*=ax[i]-ax[j];
			}
		}
		y+=(nr/dr)*ay[i];
	}
	printf("\nWhen:%f\ty:%f",x,y);
	return 0;
}








/*OUTPUT:
No of observation:
4
Enter the set of values of x&y
7 3
8 1
9 1
10 9
enter the value of x
9.5

When:9.500000   y:3.625000 */

