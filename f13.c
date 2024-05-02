// #include <stdio.h>
// int  pn(int );
// int oddsum(int );
// void  printFibonacci(int );
// int calculateHCF(int, int);
// int factorial(int );
// int sumigits(int );
// int sqrsum(int );
// int main()
// {
//     int n;
//     printf("Enter natural number\n");
//     scanf("%d", &n);
//      printf("%d %d ",0,1);    
//     printFibonacci(n-2);
    // scanf("%d%d", &x, &y);
    //    int s=printf("%d",pn(x));
    // printf("%d", printFibonacci(n));
    //    int s=printf("%d",sumigits(x));
    //    int s=printf("%d",sqrsum(x));
    //    int s=printf("%d",oddsum(x));
//     return 0;
// }
// int  pn(int x){
//     if(x!=0){
//        return x+pn(x-1) ;
//     }
//     else{
//         return x;
//     }

// }
// int oddsum(int x){
//     if(x!=0){
//         return 2*x-1+oddsum(x-1);
// }
// else{
//     return x;
// }
// }
// int sqrsum(int x){
//     if(x!=0){
//         return x*x+sqrsum(x-1);
// }
// else{
//     return x;
// }
// }
// int sumigits(int x){
//     if(x!=0){
//         return x%10+sumigits(x/10);
// }
// else{
//     return x;
// }
// }
// int factorial(int x){
//     if(x!=1){
//         return x*factorial(x-1);
// }
// else{
//     return x;
// }
// }
// int calculateHCF(int x, int y)
// {
//      if (y != 0)
//         return calculateHCF(y,x%y);
//     else
//         return x;
// }
// void  printFibonacci(int n)
// {
//     int x=0,y=1,z;
//     if(n>0){
//         z=x+y;
//         x=y;
//         y=z;
//         printf("%d",z);
//         printFibonacci(n-1);
//     }

// }
// #include<stdio.h>    
// void printFibonacci(int n){    
//     static int n1=0,n2=1,n3;    
//     if(n>0){    
//          n3 = n1 + n2;    
//          n1 = n2;    
//          n2 = n3;    
//          printf("%d ",n3);    
//          printFibonacci(n-1);    
//     }    
// }    
// int main(){    
//     int n;    
//     printf("Enter the number of elements: ");    
//     scanf("%d",&n);    
//     printf("Fibonacci Series: ");    
//     printf("%d %d ",0,1);    
//     printFibonacci(n-2);//n-2 because 2 numbers are already printed    
//   return 0;  
//  }    

#include<stdio.h>
int fib(int  n){
    if((n==0)||(n==1)){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int x=5,i;
    printf("%d\n",0);
    for(i=1;i<=5;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}