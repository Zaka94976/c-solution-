#include <stdio.h>
#include<string.h>
int main()
{
    // Q1,2
    // int a=fgetc("Zkaullah");
    // printf("%d",a); 
    // char a[] = "zakaullah34ubt.ik34obyqp8tubvlkjsbgkltkyt,bamgjtklhsk";
    // int b='l'
    // int i = 0, count = 0;
    // while (a[i] != '\0')
    // {
    //     if (a[i] == b)
    //     {
    //         count++;
    //     }

    // char a[] = "zakaullah34ubt.ik34obyqp8tubvlkjsbgkltkyt,bamgjtklhsk";
    // int i = 0, count = 0;
    // Q3 while (a[i] != '\0')
    // {
    //     if (a[i]>='a' &&a[i]<='z')
    //     {
    //         a[i]=a[i]-32;
    //     }

    //     i++;
    // }
    // printf("%s",a);
    //  char a[] = "zakaullah34ubt.ik34obyqp8tubvlkjsbgkltkyt,bamgjtklhsk";
    // int i =0,j=strlen(a)-1,t;
    // while (i<=j)
    // {
    //     t=a[i];
    //     a[i]=a[j];
    //     a[j]=t;
    //     i++;
    //     j--;
    // }
    // printf("%s",a);
    //  char a[] = "zakaullah34ubt.ik34obyqp8tubvlkjsbgkltkyt,bamgjtklhsk";
    // int i = 0, alcount = 0,digit=0,specount=0;
    // while (a[i] != '\0')
    // {
    //     if (a[i]>='a' &&a[i]<='z' || a[i]>'A' && a[i]<'Z')
    //     {
    //         alcount++;
    //     }
    //     else if (a[i]>'0'&&a[i]<'9')
    //     {
    //         digit++;
    //     }
    //     else{
    //         specount++;
    //     }
    //     i++;
    // }
    // printf("%d %d  %d",alcount,digit,specount);
    int a[]=" Hi Md Zakaullah ";
    int i =0,j=strlen(a)-1,t;
    while (a[i]=="  ")
    {
       while (i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    printf("%s",a); 
    }
    

    return 0;
}
// Q1
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[]="zkakaullah";
//     int i=0,count=0;
//     while (a[i]!='\0')
//     {
//         i++;
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }
// // 2Q
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[]="zkakaullah";
//     int i=0,count=0;
//     charb='e';
//     while (a[i]!='\0')
//     {
//         i++;
//         if (a[i]==b)
//         {
//              count++;
//         }
        
//     }
//     printf("%d",count);
//     return 0;
// }
 
 
