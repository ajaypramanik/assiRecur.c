
// 3. Write a recursive function to print first N odd natural numbers

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
    if (n==0)
    return 0;
    int s=1+f1(n-1);
    printf("%d\t",s);
    
    return s+1;
}