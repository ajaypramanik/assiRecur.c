// sum of n natural numbers

#include<stdio.h>


int f1();
int main() {
    int k,n;
    printf("enter the value of N :");
    scanf("%d",&n);
    k=f1(n);
    printf("sum is %d",k);
    return 0;
}

int f1(int n) {
    if (n==1)
    return 1;
    int s=n+f1(n-1);
    return s;
}