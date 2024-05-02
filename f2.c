#include<stdio.h>
int main(){
    // 1Q
    // int a;
    // printf("Enter number\n");
    // scanf("%d",&a);
    // printf("Print a unit digit number-%d",a%10);
    // 2Q
    //  int a;
    // printf("Enter number\n");
    // scanf("%d",&a);
    // printf("Print a unit digit number-%d",a/10);
    // 3Q
    //  int a,b,c;
    // printf("Enter number\n");
    // scanf("%d%d",&a,&b);
    // c=a;
    // a=b;
    // b=c;
    // printf("Swap value %d %d",a,b);
    // 4Q
    //  int a,b;
    // printf("Enter number\n");
    // scanf("%d%d",&a,&b);
    // b=a+b;
    // a=b-a;
    // b=b-a;
    // printf("Swap value %d %d",a,b);
    // 5Q
    //  int x=123;
    //  int rem=0,sum=0;
    //    rem=x%10;
    //    x=x/10;

    //    sum=sum+rem;
    //    rem=x%10;
    //    x=x/10;
    //    sum=sum+rem;

    //    rem=x%10;
    //    x=x/10;
    //    sum=sum+rem;
    // printf("sum of three digit %d",sum);
    // 6Q
    //  char a='b';
    //   printf("%d",a);
    // 7Q
    // int x=6,count=0;
    // int result=0;
    // result=x&1;
    // count++;
    // if(result==1){
    //     printf("%d",count);
    // }
    // x=x>>1;
    // result=x&1;
    // count++;
    // if(result==1){
    //     printf("%d",count);
    // }
    // x=x>>1;
    // Q8
    //   int x=5;
    //   int a=x&1;
    //   if(a==1){
    //     printf(" it is odd nmber\n");
    //   }
    //   else{
    //     printf("it is even number");
    //   }
    // Q9
    //  printf("%lu\n", sizeof(char));
    // printf("%lu\n", sizeof(int));
    // printf("%lu\n", sizeof(float));
    // printf("%lu", sizeof(double));
    // Q10
    //   int x=2345;
    //   x=x/10;
    //   x=x*10;
    //   printf("%d",x);
    // Q11
    //  int x=2345,y=9;
    //  x=x*10;
    //  x=x+y;
    //  printf("%d",x);
//    Q12
   int x= 123,q,r;
   q=123/10;
   r=x%10;
   r=r*100;
   q=q+r;
   printf("%d",q);




     
     
    return 0;
    
}