//Write a recursive function to print first N natural numbers


    
#include<stdio.h>


int f1();
int main() {
    int n;
    printf("enter the value of N :");
    scanf("%d",&n);
    //k=
    f1(n);
    //printf("sum is %d",k);
    //printf("the number is");
    return 0;
}

// int f1(int n) {
//     if (n==0)
//   // printf("the number is:");
//     return 0;
//     int s=1+f1(n-1);
//     printf("%d\t",s);
//     return s;
// }

// 2ND AND SHORT CODE

int f1(int n) {
  if(n>0) {
   
    f1(n-1);
    printf("%d\t",n);
  }
  
   // f1(n-1);
  

}

   //ORRRRR 3RD CODE
// int f1(int n) {
//   if(n==0) 
//     return ;
//     f1(n-1);
//     printf("%d\t",n);
//    // f1(n-1);
  

// }