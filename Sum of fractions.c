#include<stdio.h>
int main()
{
	int n,i;
	double sum=0.0;
	printf("Please input a Positive integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		sum+=1.0/i;
	}
	printf("sum=%lf\n",sum);
	return 0;
}