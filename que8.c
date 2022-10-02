// 8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>

void binary(int n)
{
    if(n==0)
    return;
    binary(n>>1);
    printf("%d",n&1);

}

int main()
{  int n;
    printf("enter the number :");
    scanf("%d",&n);
    binary(n);
    return 0;
}