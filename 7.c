#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(n){
        count++;
        n/=10;

    }

    printf("%d ",count);
    return 0;
}