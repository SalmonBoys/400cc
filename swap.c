#include<stdio.h>
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int x,y;
	printf("Please enter two integers:");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("After exchange:x=%d,y=%d\n",x,y);
	return 0;
}