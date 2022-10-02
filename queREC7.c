// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>


int f1();
int main() {
    int n;
    printf("enter the value of N :");
    scanf("%d",&n);
    f1(n);
   // printf("sum is %d",k);
    return 0;
}

int f1(int n) {
    if (n>0 )
    
     {
    int s=n*n;
    
    printf("%d\t",s);
    n=n-1;
    f1(n);
    }
}