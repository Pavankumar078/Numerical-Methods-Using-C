/*C prm to find the MEAN MODE */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void mean(int lb[],int ub[],int f[],int n)
{
	int i,x[10],fx[10];
	float Am,s=0,sum=0;
	for(i=1;i<=n;i++)
	{
		x[i]=(lb[i]+ub[i])/2;
		fx[i]=f[i]*x[i];
		s=s+f[i];
		sum=sum+fx[i];
	}
	Am=sum/s;
	printf("Fx=%f\tN=%f\n",sum,s);
	printf("\nAirthmatic Mean:%f\n",Am);
}
void mode(int lb[],int ub[],int f[],int n)
{
	int i,l1,f0,f1,f2,c;
	float mode,a,b;
	f1=f[1];
	for(i=1;i<=n;i++)
	{
	     if(f[i]>f1)
	     {
		    f1=f[i];
		    f0=f[i-1]; f2=f[i+1];
		    l1=lb[i];c=ub[i]-lb[i];
	     }
	}
	a=(f1-f0);
	b=(2*f1-f0-f2);
	mode=l1+((a/b)*c);
	printf("CI\t\tfrequecy\n");
	for(i=1;i<=n;i++)
	{
	   printf("%d-%d\t\t%d\n",lb[i],ub[i],f[i]);
	}
	printf("Mode:%f\n",mode);
}

int main()
{
	int l[10],u[10],f[10],i,n,ch;
	printf("Enter the no.of classes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter %d class interval\n",i);
		scanf("%d%d",&l[i],&u[i]);
	}
	printf("Enter the frequencies\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&f[i]);
	}
	do
	{
	   printf("\n1 for mean\t2 for mode\n");
	   printf("Enter Ur choice\n");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	       case 1:mean(l,u,f,n);
		      break;
	       case 2:mode(l,u,f,n);
		      break;
	       default:exit(0);
		       break;
	   }
	}while(ch!=0);
	return 0;
}
/*OUTPUT
Enter the no.of classes
7
Enter 1 class interval
0 10
Enter 2 class interval
10 20
Enter 3 class interval
20 30
Enter 4 class interval
30 40
Enter 5 class interval
40 50
Enter 6 class interval
50 60
Enter 7 class interval
60 70
Enter the frequencies
4 9 19 20 18 7 3

1 for mean      2 for mode
Enter Ur choice
1
Fx=2720.000000  N=80.000000

Airthmatic Mean:34.000000

1 for mean      2 for mode
Enter Ur choice
2
CI              frequency
0-10            4
10-20           9
20-30           19
30-40           20
40-50           18
50-60           7
60-70           3
Mode:33.333332

1 for mean      2 for mode
Enter Ur choice
3 */

