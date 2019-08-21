#include<stdio.h>
#include<math.h>
void main()
{
int c,n,no,t,sum=0;
printf("Enter the number");
scanf("%d",&n);
c=n;
no=1;
printf("Enter the number of digits");
scanf("%d",&t);
while((c>0) &&(no!=t))
{
c=c%10;
sum=sum+pow(c,no++);
c=c/10;
}
if(sum==n)
    printf("Dasium Number");
}

