#include <stdio.h>
int main()
{

    // Write  an program  to find  the nth  of the  Fibonaci series,
    //   Q1
    //    int prev=0,cour=1,next=0,n;
    //    printf("Enter a number\n");
    //    scanf("%d",&n);
    //    printf("1");
    //    for (int  i = 0; i <n-1; i++)
    //    {
    //        next=prev+cour;
    //        printf("%d",next);
    //        prev=cour;
    //        cour=next;

    //    }
    // Q2
    // Write  an program  to find  the nth  terms Q3 of the  Fibonaci series,
    // int prev=0,cour=1,next=0,n;
    //    printf("Enter a number\n");
    //    scanf("%d",&n);
    // //    printf("1");
    //    for (int  i = 0; i <n-1; i++)
    //    {
    //        next=prev+cour;
    //         prev=cour;
    //        cour=next;

    //    }
    //     printf("%d",next);
    //    Q3
    // int prev=0,cour=1,next=0,n;
    //    printf("Enter a number\n");
    //    scanf("%d",&n);
    // //    printf("1");
    //    for (int  i = 0; ; i++)
    //    {
    //        next=prev+cour;
    //         prev=cour;
    //        cour=next;
    //        if (next==n)
    //        {
    //         /* code */printf("Number is found\n");
    //         break;
    //        }
    //        else if (next>n)
    //        {
    //         /* code */printf("Number is not found\n");
    //         break;
    //        }

    //    } 
    // Q4
    //  int a,b,hcf=1;
    //  printf("Enter 2 number\n");
    //  scanf("%d%d",&a,&b);
    //  int min=a<b?a:b;
    //  for (int  i = 1; i <=min; i++)
    //  {
    //     /* code */if((a%i==0)  &&  (b%i==0)){
    //         hcf=i;
    //     }

    //  }
    //   printf("%d",hcf);
    // Q5
    //  int a,b,hcf=1;
    //  printf("Enter 2 number\n");
    //  scanf("%d%d",&a,&b);
    //  int min=a<b?a:b;
    //  for (int  i = 1; i <=min; i++)
    //  {
    //     /* code */if((a%i==0)  &&  (b%i==0)){
    //         hcf=i;
    //     }

    //  }
    //  if (hcf==1)
    //  {
    //     /* code */printf("it is co-prime number");
    //  }
    // Q6 btw a and b prime number
    // int n, flag = 0;
    // for (n = 1; n <= 100; n++)
    // {
    //     flag=0;
    //     for (int i = 2; i <= n / 2; i++)
    //     {

    //         if (n % i == 0)
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if(flag==0){
    //         printf("%d   ",n);
    //     }
    // }
    // Q7 next prime number
    //  int n, flag = 0;
    // for (n = 10;; n++)
    // {
    //     flag=0;
    //     for (int i = 2; i <= n / 2; i++)
    //     {

    //         if (n % i == 0)
    //         {
    //             flag = 1;
    //         }
    //     }
    //     if(flag==0){
    //         printf("%d   ",n);
    //         break;
    //     }
    // }
    // Q8 finde Armstrong number
    //     int n,r,sum=0,temp;
    // printf("enter the number=");
    // scanf("%d",&n);
    // temp=n;
    // while(n>0)
    // {
    // r=n%10;
    // sum=sum+(r*r*r);
    // n=n/10;
    // }
    // if(temp==sum)
    // printf("armstrong  number ");
    // else
    // printf("not armstrong number");
    // Q9
    int n, count = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    while(n!=0)
    {
        if ((n & 1) == 1)
           
       
     n >> 1;
    }
    printf("%d", count);

    return 0;
}