#include<stdio.h>
int main()
{
int n,sum=0,i=1;
printf("enter a positive number:");
scanf("%d",&n);
while(i<=n)
{
sum +=i;
i++;
}
printf("sum of first %d natural numbers=%d\n",n,sum);
return 0;
}
