#include<stdio.h>
int main()
{
int n,i;
printf("\nenter the initial number:");
scanf("%d",&i);
printf(\nenter the final number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==1)
{
printf("\n the odd number is:%d",i);
}
else
{
printf("\n there is no od number");
}
}
return 0;
}
