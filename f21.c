// #include<stdio.h>
// struct em
// {
//     /* data */
//     int id;
//     int sal;
//     char name[10];
// };

// int main(){
//     struct em s;
//      printf("Enter name of em\n");
//      gets(s.name);

//      printf("Enter id of em\n");
//      scanf("%d",&s.id);

//      printf("Enter sal of em\n");
//      scanf("%d",&s.sal);

//      printf("Name=%d ID=%d SAL=%d",s.name,s.id,s.sal);

// #include <stdio.h>
// struct em
// {
//     /* data */
//     int id;
//     int sal;
//     char name[10];
// };
// int main()
// {
//     struct em s[10];
//     for (int i = 0; i < 3; i++)
//     {

//         printf("Enter name of em\n");
//         fflush(stdin);
//         gets(s[i].name);

//         printf("Enter id of em\n");
//         scanf("%d", &s[i].id);

//         printf("Enter sal of em\n");
//         scanf("%d", &s[i].sal);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Name=%d ID=%d SAL=%d \n", s[i].name, s[i].id, s[i].sal);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>

// struct em
// {
//     /* data */
//     int id;
//     int sal;
//     char name[10];
// };
// int main()
// {
//     struct em s[10],temp;
//     for (int i = 0; i < 3; i++)
//     {

//         printf("Enter name of em\n");
//         fflush(stdin);
//         gets(s[i].name);

//         printf("Enter id of em\n");
//         scanf("%d", &s[i].id);

//         printf("Enter sal of em\n");
//         scanf("%d", &s[i].sal);
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         /* code */for (int j = i; j < 3; j++)
//         {
//             /* code */
//             if(strcmp(s[i].name,s[j].name)>0){/// this is program is organise according to name when you are maintaine according to salaery and id nuber as your choise
//                  temp=s[i];
//                  s[i]=s[j];
//                  s[j]=temp;;
//             }
//         }

//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Name=%c ID=%d SAL=%d \n", s[i].name, s[i].id, s[i].sal);
//     }
//     return 0;
// }
// #include <stdio.h>
// struct TIME
// {
//     int seconds;
//     int minutes;
//     int hours;
// };

// void differenceBetweenTimePeriod(struct TIME t1,
//                                  struct TIME t2,
//                                  struct TIME *diff);

// int main()
// {
//     struct TIME startTime, stopTime, diff;

//     printf("Enter the start time. \n");
//     printf("Enter hours, minutes and seconds: ");
//     scanf("%d %d %d", &startTime.hours,
//           &startTime.minutes,
//           &startTime.seconds);

//     printf("Enter the stop time. \n");
//     printf("Enter hours, minutes and seconds: ");
//     scanf("%d %d %d", &stopTime.hours,
//           &stopTime.minutes,
//           &stopTime.seconds);

//     // Difference between start and stop time
//     differenceBetweenTimePeriod(startTime, stopTime, &diff);
//     printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
//            startTime.minutes,
//            startTime.seconds);
//     printf("%d:%d:%d ", stopTime.hours,
//            stopTime.minutes,
//            stopTime.seconds);
//     printf("= %d:%d:%d\n", diff.hours,
//            diff.minutes,
//            diff.seconds);
//     return 0;
// }

// // Computes difference between time periods
// void differenceBetweenTimePeriod(struct TIME start,
//                                  struct TIME stop,
//                                  struct TIME *diff)
// {
//     while (stop.seconds > start.seconds)
//     {
//         --start.minutes;
//         start.seconds += 60;
//     }
//     diff->seconds = start.seconds - stop.seconds;
//     while (stop.minutes > start.minutes)
//     {
//         --start.hours;
//         start.minutes += 60;
//     }
//     diff->minutes = start.minutes - stop.minutes;
//     diff->hours = start.hours - stop.hours;
// }

#include <stdio.h>
#include <string.h>
struct students
{
    int roll;
    int ch, mt, ph;
    char name[10];
};
int main()
{
    struct students s[10];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter  Roll number of students \n");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter  Roll number of students \n");
        scanf("%d", &s[i].roll);
        printf("Enter ch of number \n");
        scanf("%d\n", &s[i].ch);
        printf("Enter mt of number \n");
        scanf("%d\n", &s[i].mt);
        printf("Enter ph of number \n");
        scanf("%d\n", &s[i].ph);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name=%d Rool Number=%d Ch=%d  mt=%d  ph=%d \n", s[i].name, s[i].roll, s[i].ch, s[i].mt, s[i].ph);
    }
    return 0;
}