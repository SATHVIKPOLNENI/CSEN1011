#include<stdio.h>
 int main()
{
int i,j,m,n,sum;
//printf("Enter the first place:\n");
scanf("%d%d",&i,&j);
//printf("Enter the second place:\n");
scanf("%d%d",&m,&n);
sum=i+j+m+n;
if(sum%2==0)
{
printf("Same colour");
}
else
{
printf("Different colour");
}
}
