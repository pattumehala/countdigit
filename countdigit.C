#include<stdio.h>
int main(
{
int m,count=0,num;
printf("enter a number:")
scanf("%d",&m);
num=m;
while(num!=0)
{
count++;
num=num/10;
}
printf("%d",count);
return 0;
}
