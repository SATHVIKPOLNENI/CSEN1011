#include <stdio.h>
int main()
{
struct customer {

char name[15];

int amount;

char mobile_number[10];

}p[2];
for(int i=0;i<2;i++)
{
scanf("%s",p[i].name);
scanf("%d",&p[i].amount);
if(p[i].amount<0)
{
printf("Invalid amount");
return 0;
}
scanf("%s",p[i].mobile_number);
if(strlen(p[i].mobile_number)!=10)
{
printf("Invalid mobile number");
return 0;
}
int j=0;
while(p[i].mobile_number[j]!='\0'){
if(p[i].mobile_number[j]>='0' && p[i].mobile_number[j]<='9')
j+=1;
else
{
printf("Invalid entry");
return 0;
}
}

}
int s=p[0].amount+p[1].amount;
printf("%d",s);
}
