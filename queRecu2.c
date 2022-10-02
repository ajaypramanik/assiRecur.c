// // Write a recursive function to print first N natural numbers in reverse order


#include<stdio.h>


int f1();
int main() {
    int n;
    printf("enter the value of N :");
    scanf("%d",&n);
    //k=
    f1(n);
    
    return 0;
}

int f1(int n) {
  if(n>0) {
    //f1(n-1);
    printf("%d\t",n);
    f1(n-1);
  }

}