// #include<stdio.h>
// int main(){
//     int a,b,l;
//     printf("Enter numebr\n");
//     scanf("%d%d",&a,&b);
//     for(l=a>b?a:b;l<=a*b;l++){
//         if(l%a==0 && l%b==0)
//         break;
//     }
//     printf("%d",l);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,h;
//     printf("Enter numebr \n");
//     scanf("%d%d",&a,&b);
//     for(h=a<b?a:b;h<1;h++){
//         if(a%h==0 && b%h==0){
//             break;
//         }
//     }
//     printf("%d",h);
//   return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,i,flag=0;
//     printf("Enter a posotive number \n");
//     scanf("%d",&n);
//     if(n==0 || n==1){
//         flag=1;
//     }
//     for(int i=2;i<=n/2;i++){
//            if(n%i==0){
//             flag=1;
//             break;
//            }
//     }
//     if(flag==0){
//         printf("%d is  prime number ",n);
//         n=n+2;
//         printf(" %d is prime number ",n);
        
//     }
//     else{
//         printf("%d is  not prime number",n);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
   int l=10,u=20,x,i;
   for(int x=l+1;x<=u-1;x++){
    for(int i=2;i<x;i++){
       if(x%i==0){
        break;
       }
    }
    if(i==x){
        printf("%d",x);
    }
   }

  return 0;
}
#include <stdio.h>

int main() {
    // Write C code here
     int f=0,s=1,ne;
     printf("%d %d ",f,s);
     for(int i=2;i<10;i++){
         ne=f+s;
         printf("%d ",ne);
         f=s;
         s=ne;
     }

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>
int factorial(int n) {
      if(n == 0)
       return 1;
     int factorial = 1;
     for (int i = 2; i <= n; i++)
         factorial = factorial * i;
  return factorial;
 }
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
 int pascal(int n){
     int i,j;
     for ( i = 0; i <=n; i++)
     {
         /* code */for (j = 0; j <=i; j++)
         {

             printf("%d",nCr(i,j));
         }
         printf("\n");

     }

 }
int main() {
    // Write C code here
   pascal(10);
     

    return 0;
}
#include<stdio.h>
int main(){

    for(int i;i<=5;i++){
         printf("%d\n",i*i);
    }
    return 0;
}