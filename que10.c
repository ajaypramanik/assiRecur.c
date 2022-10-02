// 10. Write a recursive function to print reverse of a given number


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
      
if(n>0) {
      int i=n%10;
      printf("%d",i);
          n=n/10 ;
          f1(n);
          
     // int j=i;
         // int k=j%10;
    
}
    
    
}
