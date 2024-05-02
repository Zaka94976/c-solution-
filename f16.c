#include <stdio.h>
int main()
{
  // Q1
  // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int b[3][3] = {{2, 3, 4}, {3, 4, 5}, {7, 8, 6}};
  // int c[3][3];
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     c[i][j] = a[i][j] + b[i][j];
  //    }
  // }
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("%d   ", c[i][j]);
  //   }
  //   printf("\n");
  // }
  // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int b[3][3] = {{2, 3, 4}, {3, 4, 5}, {7, 8, 6}};
  // int c[3][3];
  // int sum = 0;
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     for (int k = 0; k < 3; k++)
  //     {
  //       c[i][j] = a[i][k] * b[k][j];
  //       sum = sum + c[i][j];
  //     }
  //   }
  // }
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("%d   ", c[i][j]);
  //   }
  //   printf("\n");
  // }
  //  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  //  int b[3][3];
  //  for (int i = 0; i <3; i++)
  //  {
  //   for (int k = 0; k <3; k++)
  //   {
  //     b[i][k]=a[k][i];
  //   }

  //  }
  //   for (int i = 0; i < 3; i++)
  // {
  //   for (int k = 0;k< 3; k++)
  //   {
  //     printf("%d   ", a[k][i]);
  //   }
  //   printf("\n");
  // }
  // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int sum=0;
  // for (int  i = 0; i <3; i++)
  // {
  //   for (int j =0; j<3;j++)
  //   {
  //       if (i==j)
  //       {
  //         sum=sum+a[i][j];
  //       }

  //   }

  // }
  // printf("%d",sum);
  //   int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {10, 8, 9}};
  // int sum=0;
  // for (int  i = 0; i <3; i++)
  // {
  //   for (int j =0; j<3;j++)
  //   {
  //       if (i+j==2)
  //       {
  //         sum=sum+a[i][j];
  //       }

  //   }

  // }
  // printf("%d",sum);
  //  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  //  int b[3][3];
  //  int sum=0;
  //  for (int i = 0; i <3; i++)
  //  {
  //   for (int j = 0; j <3; j++)
  //   {
  //      sum=sum+a[j][i];
  //   }
  //   printf("%d\t",sum);
  //   sum=0;
  //  }
  //  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  //  int b[3][3];
  //  int sum=0;
  //  for (int i = 0; i <3; i++)
  //  {
  //   for (int j = 0; j <3; j++)
  //   {
  //      sum=sum+a[i][j];
  //   }
  //   printf("%d\t",sum);
  //   sum=0;
  //  }
  // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int b[3][3];
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     if (i > j)
  //       a[i][j] = 0;
  //   }
  // }
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("%d  ", a[i][j]);
  //   }
  //   printf("%d  \n");
  // }
  //  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int b[3][3];
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     if (i < j)
  //       a[i][j] = 0;
  //   }
  // }
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("%d  ", a[i][j]);
  //   }
  //   printf("%d  \n");
  // }
  //   int a[3][3] = {{1, 0, 0}, {4, 5, 0}, {7, 0, 0}};
  // int b[3][3];
  // int count=0;
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     if (a[i][j]==0)
  // 		{
  // 			++count;
  // 		}
  //   }
  // }

  // if (count>((3*3)/2))
  // {
  // 	printf ("The given matrix is sparse matrix. \n");
  // }
  // else{
  // 	printf ("The given matrix is not a sparse matrix.\n");
  // }
  // printf ("There are %d number of zeros in the matrix.\n\  n",count);
  //  int a[3][3] = {{1, 0, 0}, {4, 5, 0}, {7, 0, 0}};
  // int b[3][3];
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     if (a[i][j]==1)
  // 		{
  // 			printf("%d",a[i][j]);
  // 		}
  //   }
  // }

  // if (count>((3*3)/2))
  // {
  // 	printf ("The given matrix is sparse matrix. \n");
  // }
  // else{
  // 	printf ("The given matrix is not a sparse matrix.\n");
  // }
  // printf ("There are %d number of zeros in the matrix.\n\n",count);
  // int a[3][3] = {{1, 1, 1}, {4, 5, 6}, {1, 1, 1}};
  // int sum = 0, index = 0, max = 0;
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //     if (a[i][j] == 1)
  //     {
  //       sum = sum + a[i][j];
  //     }
  //   if (sum > max)
  //   {
  //     max = sum;
  //     index = i;
  //   }
  // }
  //   printf("%d %d", max, index);
  int a[10]={12,23,45,67,78,12,23,45,67,78};
  int frwq[100]={0},i;
  for ( i = 0; i <10; i++)
  {
    frwq[a[i]]++;
  }
  for ( i = 0; i <100; i++)
  {
     if(frwq[i]!=0){
      printf("%d===>%d\n",i,frwq[i]);
     }
  }  
    return 0;
  }