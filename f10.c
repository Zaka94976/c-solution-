// #include<stdio.h>
// Q2 int simpleinterest(int ,int ,int );
// Q1 int areacircle(float);
// Q3int check(int );
// Q4int naturalnumbers(int );
// Q5int oddnaturalnumbers(int );
// Q6long int multiplyNumbers(int n);
// int factorial(int );
// int nCr(int , int );
// int per(int , int );
// int pascal(int );

// int main(){
// Q1 int r;
// printf("Enter Radius of Circle\n");
// scanf("%d",&r);
// float A=areacircle(r);
// printf("Area of Circle is %f\n",A);
// Q2 int p,r,t;
// printf("Enter Principal Amount\n");
// scanf("%d",&p);
// printf("Enter  Rate of interest\n");
// scanf("%d",&r);
// printf("Enter  Number of years\n");
// scanf("%d",&t);
// float simaple=( p, r, t);
// printf("%f",simaple);
// // Q3 int y;
//  printf("Enter number\n");
//  scanf("%d",&y);
//  int x=check(y);
//   if(x==1){
//     printf("It si even number\n");
//   }
//   else if (x==0)
//   {
//     printf("It si odd number\n");
//   }
//    Q4 int n;
// printf("Enter number \n");
// scanf("%d",&n);
//  naturalnumbers(n);
// Q5int n;
//     printf("Enter number \n");
//     scanf("%d",&n);
//    oddnaturalnumbers(n );
//    Q6 int n;
// printf("Enter a positive integer: ");
// scanf("%d",&n);
// printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//    int n = 5, r = 3;
//   printf("%d", per(n, r));
// pascal(5);
// return 0;
//  }
//    int factorial(int n) {
//       if(n == 0)
//       return 1;
//     int factorial = 1;
//     for (int i = 2; i <= n; i++)
//         factorial = factorial * i;
//     return factorial;
// }
// int per(int n , int r ){
//     return factorial(n) / factorial(n-r);
// }

// int nCr(int n, int r) {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
//  int pascal(int n){
//     int i,j;
//     for ( i = 0; i <=n; i++)
//     {
//         /* code */for (j = 0; j <=i; j++)
//         {

//             printf("%d",nCr(i,j));
//         }
//         printf("\n");

//     }

//  }
// Q6 long int multiplyNumbers(int n) {
// if (n>=1)
//     return n*multiplyNumbers(n-1);
// else
//     return 1;
// }
// Q5 int oddnaturalnumbers(int n ){
//      for (int i = 1; i <=n; i++)
//         printf("%d\n ",2*i-1);
//  }
// Q4 int naturalnumbers(int n){
// for (int i = 1; i <=n; i++)
//     printf("%d\n ",i);
// }
// // Q3 int check(int y){
//     if(y%2==0){
//          return 1;
//     }
//     else{
//         return 0;
//     }
//  }
// Q2int simpleinterest(int p,int r,int t){
//     return ((p*r*t)/100);
// }
// Q1 int areacircle( float r){
//     return (3.14*r*r);
// }
// #include <stdio.h>
// int digits(int, int);
// int main()
// {
//     int n, digit;
//     printf("Enter a number\n");
//     scanf("%d%d", &n, &digit);
//     int v = digits(n, digit);
//     printf(" this is same digit %d", v);
// }
// int digits(int n, int digit)
// {
//     int rem;
//     while (n)
//     {
//         rem = n % 10;
//         if (rem == digit)

//             return 1;
//         n = n / 10;
//     }
//     return 0;
// }
