// Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
void printNum();
int main() {
    int n;
    printf("enter value of n :");
    scanf("%d",&n);
    printNum(n);
    return 0;
}

void printNum(int n) {
if((n>0) ){ 
    printNum(n-1);
   // n+2;
    printf("%d\t",n);
    //n++;
}

}
