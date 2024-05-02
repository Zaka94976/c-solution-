#include <stdio.h>
int main()
{
    // Q1
    // int a;
    // printf("Enter month number");
    // scanf("%d",&a);
    // switch (a)
    // {
    // case 1:printf("January - 31 days\n");
    //     break;
    // case 2:printf("February - 28 days in a common year and 29 days in leap year\n");
    //     break;
    // case 3:printf("March - 31 days\n");
    //     break;
    // case 4:printf("April - 30 days\n");
    //     break;
    // case 5:printf("May - 31 days\n");
    //     break;
    // case 6:printf("June - 30 days\n");
    //     break;
    // case 7:printf("July - 31 days\n");
    //     break;
    // case 8:printf("August - 31 days\n");
    //     break;
    // case 9:printf("September - 30 days\n");
    //     break;
    // case 10:printf("October - 31 days\n");
    //     break;
    // case 11:printf("November - 30 days\n");
    //     break;
    // case 12:printf("December - 31 days\n");
    //     break;

    // default:
    //       printf("Month is not found");
    //     break;
    // }
    // Q2
    //  int a;
    //   int b,c;
    //  printf("Enter  number");
    // scanf("%d",&a);
    // switch (a)
    // {
    // case 1:    printf("Enter two number\n");
    //            scanf("%d%d",&b,&c);
    //            printf("sum of %d",b+c);
    //     break;
    // case 2:    printf("Enter two number\n");
    //            scanf("%d%d",&b,&c);
    //            printf("sub of %d",b-c);
    //     break;
    // case 3:    printf("Enter two number\n");
    //            scanf("%d%d",&b,&c);
    //            printf("mul of %d",b*c);
    //     break;
    // case 4:    printf("Enter two number\n");
    //            scanf("%d%d",&b,&c);
    //            printf("div of %d",b/c);
    //     break;
    // case 5:    printf("you are Exit\n");

    //     break;

    // default:

    //     break;
    // }
    // #3 same as Month
    // Q4
    //     int choice, a, b, c;
    //    while (1)
    //    {
    //     printf("#######################################################\n");
    //     printf("Enter  choice number\n");
    //     printf(" 1 This is isosceles triangle\n");
    //     printf(" 2 This is  right angled triangle\n");
    //     printf(" 3 This is equilateral triangle\n");
    //     printf(" 4 Exit\n");
    //     scanf("%d",&choice);
    //     printf("Enter lenght of triangle\n ");
    //     scanf("%d%d%d", &a, &b, &c);
    //     switch (choice)
    //     {
    //     case 1:
    //         if (a == b || b == c || c == a)
    //         {
    //             printf("This is isosceles triangle\n");
    //         }
    //         else
    //         {
    //             printf("This is  not isosceles triangle\n");
    //         }
    //         break;
    //     case 2:
    //         if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    //         {
    //             printf("This is  right angled triangle\n");
    //         }
    //         else
    //         {
    //             printf("This is  not  right angled triangle\n");
    //         }
    //          break;
    //     case 3:
    //         if ((a == b) || (b == c))
    //         {
    //             printf("This is   equilateral trianglee\n");
    //         }
    //         else
    //         {
    //             printf("This is  not equilateral triangle\n");
    //         }
    //          break;
    //     case 4:break;

    //    }
    //    }
    // Q5
    // Q6
    // int x = 200;
    // switch (x % 100==0)
    // {
    // case 0:
    //     switch (x % 400==0)
    //     {
    //     case 0:
    //         printf("leep year");
    //         break;
    //     case 1:
    //         printf(" non leep year");
    //         break;
    //     }

    // case 1:
    //     switch (x % 4==0)
    //     {
    //     case 0:
    //         printf("leep year");
    //         break;
    //     case 1:
    //         printf(" non leep year");
    //         break;
    //     }
    // }
    // Q7
    // float x = 24, amount = 0, total = 0;
    // switch (x <= 50)
    // {
    // case 1:
    //     amount = x * 0.5;
    //     break;
    // case 0:
    //     switch (x <= 150)
    //     {
    //     case 1:
    //         amount = 25 + (x - 50) * 0.75;
    //         break;
    //     case 0:
    //         switch (x <= 250)
    //         {
    //         case 1:
    //             amount = 100 + (x - 150) * 120;
    //             break;
    //         case 0:
    //             amount = 220 + (x = 250) * 1.5;
    //         default:
    //             break;
    //         }
    //     default:
    //         break;
    //     }

    // default:
    //     break;
    // }
    // total=amount+amount*0.20;
    // printf("Total amount is %f",total);
    // Q9
    //  int x=2;
     
    //  switch (x<0)
    //  {
    //  case 1:printf("IT is postive numebr + %d",x);     
    //     break;
    // case 2:printf("It is Negative number - %d",x);
     
    // }
    // Q10
    //  int x;
    //  printf("Enter a number\n");
    //  scanf("%d",&x);
    //  if(x%2==0){
    //     printf("It is even number %d",(x+1));
    //  }
    //  else{
    //     printf("it is odd number %d",x);
    //  }

    return 0;
}