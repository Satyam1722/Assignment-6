#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum+=i;

    printf("sum is %d ",sum);
    return 0;
}