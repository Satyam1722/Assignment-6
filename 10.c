#include<stdio.h>
int main()
{
    int i,j,n,rev=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    printf("%d ",rev);
    return 0;
}