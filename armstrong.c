#include<stdio.h>
int main()
{
	int m,n,sum,r;
	printf("Enter the number "); 
	scanf("%d",&n);
r=n;
sum=0;
while(n!=0)
{
	 m=n%10;
	 sum=sum+(m*m*m);
	 n=n/10;
}
if(r==sum)
printf("Armstrong number");
else
printf("not Armstrong number");
return 0;
}