#include<stdio.h>
int main(){
    // Q1
    //  int n,sum=0;
    //  printf("Enter number\n");
    //  scanf("%d",&n);
    //  for (int  i = 0; i <=n; i++)
    //  {  
    //     sum=sum+i;
         
    //  }
    //   printf("%d\n",sum);
//Q2
//    int i,n,sum=0;
//    printf("Input number of terms : ");
//    scanf("%d",&n);
//    printf("\nThe even numbers are :");
//    for(i=1;i<=n;i++)
//    {
//      printf("%d ",2*i);
//      sum+=2*i;
//    }
//    printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
   //Q3
//     int i,n,sum=0;

//    printf("Input number of terms : ");
//    scanf("%d",&n);
//    printf("\nThe odd numbers are :");
//    for(i=1;i<=n;i++)
//    {
//      printf("%d ",2*i-1);
//      sum+=2*i-1;
//    }
//    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
//Q4
//  int n, sum=0;

//   printf("Enter n value: ");
//   scanf("%d", &n);

//   for(int i=0; i<=n; i++)
//   {
//      sum += (i*i);
//   }

//   printf("Sum of squares of first %d natural numbers = %d",
//   
// Q5
// int n, sum=0;

//   printf("Enter n value: ");
//   scanf("%d", &n);

//   for(int i=0; i<=n; i++)
//   {
//      sum += (i*i*i);
//   }

//   printf("Sum of squares of first %d natural numbers = %d",n, sum);
// Q6
//  int n, fact=1;

//   printf("Enter n value: ");
//   scanf("%d", &n);
//  for(int i=1; i<=n; i++)
//   {
//      fact= fact*i;
//   }
//   printf("%d",fact);
// Q7
//  int n,count=0;
//   printf("Enter n value: ");
//   scanf("%d", &n);
//   while (n!=0)
//   {
//     n=n/10;
//     count++;
//   }
//   printf("%d",count);
// Q8
int n,i,flag=0;
 printf("Enter n value: ");
 scanf("%d", &n);
 for ( i = 2; i < n; i++)
 {
    if (n%i==0)
    {
        flag=1;
        break;
    }
  
 }
 if (flag==1)
 {
    printf(" not prime");
 }
 else{
    printf(" prime");
 }
    
//  }int n,i,flag=0;
// Q9 it is optimise solutionj
// 
// Q9
//  int i, a,b;
//  printf("Enter a number\n");
//  scanf("%d%d",&a,&b);
// //  for ( i = 1; i <=a*b; i++)
// //  for ( i = 1; ; i++)
//  for ( i = 1; i <=2000; i++)
//  {
//    if ((i%a==0) && (i%b==0))
//     {
//         break;
//     }

    
//  }
//  printf("%d",i);
// Q10
//  int i,n,remainder,reverse=0;
//  printf("Enter a number\n");
//  scanf("%d",&n);
//  while (n!=0)
//  {
//     remainder=n%10;
//     n=n/10;
//     reverse=reverse*10+remainder;

//  }
//  printf("%d",reverse);
 

 
 

  
    return 0;
}