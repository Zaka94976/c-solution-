#include<stdio.h>
int main(){
    // 1Q
    // int a;
    // printf("Enter a number \n");
    // scanf("%d",&a);
    // if(a>0){
    //     printf("This is a positive number\n");
    // }
    // else if(a<0){
    //     printf("This is Negative number\n");
    // }
    // else{
    //     printf("This is zero ");
    // }
    // 2Q
    // int a;
    // printf("Enter a number \n");
    // scanf("%d",&a);
    // if(a%5==0){
    //     printf("This number is divide by 5\n");
    // }
    // else{
    //     printf("This number is not  divide by 5");
    // }
    // 3Q
    //   int a;
    //   printf("Enter a number \n");
    //   scanf("%d",&a);
    //   if(a&1==1){
    //     printf("This is odd number\n");
    //   }
    //   else{
    //     printf("This is even number\n");
    //   }
    // Q4
    //  int a;
    // printf("Enter a number \n");
    // scanf("%d",&a);
    // if(a%2==0){
    //     printf("This number is even number\n");
    // }
    // else{
    //     printf("This number is odd number");
    // }
    // Q5
    //  int a;
    // printf("Enter a number \n");
    // scanf("%d",&a);
    // if(a>99&& a<1000){
    //     printf("This is three digit number\n");
    // }
    // else{
    //     printf("This is  not three digit number");
    // }
    // Q6
    //  int num1,num2;
    //  printf("Enter number\n");
    //  scanf("%d%d",&num1,&num2);
    //   if(num1>num2){
    //     printf("%d is grater",num1);
    //   }
    //   else if(num1<num2){
    //      printf("%d is grater",num2);
    //   }
    //   else{
    //      printf("%d=%d is equal number",num1,num2);
    //   }
    //  7Q
    //  int a,b,c,f;
    //  printf("Enter a number\n");
    //  scanf("%d%d%d",&a,&b,&c);
    //  f=b*b-4*a*c;
    //  if(f>0){
    //     printf(" real &  distinct");
    //  }
    //  else if(f<0){
    //     printf(" imaginary roots");
    //  }
    //  else{
    //     printf(" real & distinct");
    //  }
    // 8Q
    //   int a,b,c;
    //   printf("Enter number\n");
    //   scanf("%d%d%d",&a,&b,&c);
    //   if(a>b&&a>c){
    //     printf("%d is grater number\n",a);
    //   }
    //   else if(b>c)
    //   {
    //       printf("%d is grater number\n",b);
    //   }    
    //   else{
    //     printf("%d is grater number\n",c);
    //   }
    // 9Q
    //  int eng,mth,chm,bio,phy,anw;
    //  float result;
    //  printf("Enter five subject number\n");
    //  scanf("%d%d%d%d%d",&eng,&mth,&chm,&bio,&phy);
    //  result=(eng+mth+chm+bio+phy)/100;
    //  anw=result*100;
    //  if(anw<=33){
    //     printf("you are pass\n");
    //  }
    //  else{
    //     printf("you are not pass");
    //  }
    // Q9
//     char ch;
 
//    printf("\nEnter The Character : ");
//    scanf("%c", &ch);
 
//    if (ch >= 'A' && ch <= 'Z')
//       print f("Character is Upper Case Letters");
//    else
//       printf("Character is Not Upper Case Letters");
// Q10
    //  int a;
    //  printf("Enter number\n");
    //  scanf("%d",&a);
    //  if(a%3==0&&a%2==0){
    //     printf(" %d divisible by 3 and divisible by 2.",a);
    //  }
    //  else{
    //     printf("%d is not divisible by 3 and divisible by 2. ",a);
    //  }
    // Q11
    //  int a;
    //  printf("Enter number\n");
    //  scanf("%d",&a);
    //  if(a%7==0||a%3==0){
    //     printf(" %d  divisible by 7 or divisible by 3",a);
    //  }
    //  else{
    //     printf("%d is not  divisible by 7 or divisible by 3",a);
    //  }
    // Q12
     int a,b,c;
     printf("Enter length of trangle \n");
     scanf("%d%d%d",&a,&b,&c);
     if(a+b>c && b+c>a &&c+a>b){
        printf("the triangle is valid");
     }
     else{
        printf("the triangle is not valid");
     }
    return 0;
}