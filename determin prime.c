#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
	if(n<=1)
		return 0;
	if(n==2)
		return 1;
	for(i=3;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	printf("Please enter a integer:");
	scanf("%d",&n);
	if(prime(n))
		printf("This number is prime\n");
	else
		printf("Thin number is not prime\n");
	return 0;
}
