/*C prm to find Newton forward interpolation formula*/
#include<stdio.h>
#include<math.h>
int main()
{
	float ax[30],ay[30],diff[30][30],nr=1,dr=1,h,x,y,p,yp;
	int i,j,k,n;
	printf("\nNo of observation:\n");
	scanf("%d",&n);
	printf("Enter the set of values of x&y\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&ax[i],&ay[i]);
	}
	printf("\nEnter the value of x\n");
	scanf("%f",&x);
	h=ax[1]-ax[0];
	for(i=0;i<n;i++)
	{
		diff[i][1]=ay[i+1]-ay[i];
	}
	for(j=2;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
		}
	}
	i=0;
	while(!(ax[i]>x))
	{
		i++;
	}
	i--;
	p=(x-ax[i])/h;
	yp=ay[i];
	for(k=1;k<n;k++)
	{
		nr*=p-k+1;
		dr*=k;
		yp+=(nr/dr)*diff[i][k];
	}
	printf("\nWhen x=%f\ty=%f",x,yp);
	return 0;
}/*END OF MAIN*/
/*OUTPUT:

No of observation:                                                              
4                                                                               
Enter the set of values of x&y                                                  
75 256                                                                          
80 202                                                                          
85 118                                                                          
90 40                                                                                                                                                  Enter the value of x                                                            
79                                                                                                                                                              
When x=79.000000        y=216.351990*/

