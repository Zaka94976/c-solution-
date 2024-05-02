// #include <stdio.h>
// #include <conio.h>
//  int max(int [],int);
// void main()
// {
// 	int a[]={10,5,45,12,19};
// 	int n=5,m;
// 	m=max(a,n);
// 	printf("\nMAXIMUM NUMBER IS %d",m);
// 	getch();
// }
//  int max(int x[],int k)
// {
// 	int t,i;
// 	t=x[0];
// 	for(i=1;i<k;i++)
//         {
// 		if(x[i]>t)
// 			t=x[i];
// 	}
// 	return(t);
// }
// #include <conio.h>
//  int min(int [],int);
// void main()
// {
// 	int a[]={10,5,45,12,19};
// 	int n=5,m;
// 	m=min(a,n);
// 	printf("\nMAXIMUM NUMBER IS %d",m);
// 	getch();
// }
//  int min(int x[],int k)
// {
// 	int t,i;
// 	t=x[0];
// 	for(i=1;i<k;i++)
//         {
// 		if(x[i]<t)
// 			t=x[i];
// 	}
// 	return(t);
// }
// #include <stdio.h>
// int main()
// {
//     int a[] = {20, 30, 40, 20};
//      int n;
//      int i;
//      printf("Enter number\n");
//      scanf("%d",&n);
//     for (int j = 0; j < 2; j++)
//     {
//         int temp = a[0];
//         for ( int i = 0; i <n-1; i++)
//         {
//             a[i] = a[i + 1];
//         }
//         a[n-1] = temp;
//     }
//     for (int  i = 0; i <n-1; i++)
//     {
//         printf("%d\n",a[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[] = {20, 30, 40, 60};
//     int n, temp[4];
//     int i;
//     printf("Enter number\n");
//     scanf("%d", &n);
//     for (int k = 0; k < 1; k++)
//     {
//         for (int i = 2; i < n; i++)
//         {
//             for (int j = 0; j < n - 2; j++)
//             {
//                 temp[j] = a[j];
//             }
//         }
//     }
//     for (int l = 0; l < n - 1; l++)
//     {
//         a[l] = temp[l];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int temp,d=2;
//     while (d != 0)
//     {
//         temp = a[4];
//         for (int i = 4; i > 0; i--)
//         {
//             a[i] = a[i - 1];
//         }
//         a[0] = temp;
//         d--;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int i;
//     int a[]={1,2,3,4,5,6,6};
//     for ( i = 0; i <8; i++)
//     {
//         if (a[i]==a[i+1])
//         {
//              printf("%d\n",a[i]);
//         }

//     }

//    return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[] = {1, 1, 2, 2, 23,23, 4};
//     int count = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = i + 1; j < 6; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 count++;
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//         int a[] = {1, 1, 2, 2, 23,23, 4};

//     for (int i = 0; i < 7; i++)
//     {
//         int count = 0;
//         for (int j = i + 1; j < 6; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 count++;
//             }
//         }
//          if(count==0){
//             printf("%d\n",a[i]);
//         }

//     }
// return 0;
// }
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c[10], i = 0, j = 0, k = 0;
    for (k = 0; k < 10; k++)
    {
        if (i >= 5)
        {
            while (k < 10)
            {
                c[k] = b[j];
                j++;
                k++;
                if (k == 10)
                {
                    break;
                }
            }
        }
         if (j >= 5)
        {
            while (k < 10)
            {
                c[k] = b[j];
                j++;
                k++;
                if (k == 10)
                {
                    break;
                }
            }
        }
        else if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }
    for (k = 0; k < 10; k++)
    {
        printf("%d\n", c[k]);
    }
    return 0;
}