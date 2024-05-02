 // #include <stdio.h>
// int main()
// {
//     int a[10], even_sum = 0, odd_sum = 0;
//     // Calculate length of array arr
//     int length = sizeof(a) / sizeof(a[0]);
//     printf("Enter number\n");
//     for (int i = 0; i <= 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < length; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             even_sum = even_sum + a[i];
//         }
//         else
//         {
//             odd_sum = odd_sum + a[i];
//         }
//     }
//     // printf("Sum of all the elements of an array: %d  ",sum);
//     // float average = sum / 10;
//     // printf("average of all the elements of an array: %f  ", average);
//     printf("%d",even_sum);
//     printf("%d",odd_sum);
//     return 0;

// }
// #include<stdio.h>

// int main()
// {
//  int Size, i, a[10];
//  int Even_Sum = 0, Odd_Sum = 0;

//  printf("\n Please Enter the Size of an Array : ");
//  scanf("%d", &Size);

//  printf("\nPlease Enter the Array Elements\n");
//  for(i = 0; i < Size; i++)
//  {
//       scanf("%d", &a[i]);
//  }

//  for(i = 0; i < Size; i ++)
//  {
//    if(a[i] % 2 == 0)
//    {
//  	Even_Sum = Even_Sum + a[i];
//    }
//    else
//    {
//  	Odd_Sum = Odd_Sum + a[i];
//    }
//  }

//  printf("\n The Sum of Even Numbers in this Array = %d ", Even_Sum);
//  printf("\n The Sum of Odd Numbers in this Array = %d ", Odd_Sum);
//  return 0;
// }
// #include <stdio.h>
// int main()
// {
    //   int n;
    //   double arr[100];
    //   printf("Enter the number of elements (1 to 100): ");
    //   scanf("%d", &n);

    //   for (int i = 0; i < n; ++i) {
    //     printf("Enter number%d: ", i + 1);
    //     scanf("%lf", &arr[i]);
    //   }

    //   // storing the largest number to arr[0]
    //   for (int i = 1; i < n; ++i) {
    //     if (arr[0] < arr[i]) {
    //       arr[0] = arr[i];
    //     }
    //   }

    //   printf("Largest element = %.2lf", arr[0]);
//     #include<stdio.h>
//     int main(){
//     int a[10] = {2, 3, 41, 234, 442, 43, 56, 64, 676765, 6786};
//     int temp = 0, i=0;
//     for ( i = 0; i < 9; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d    ", a[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <limits.h>
 
// int main()
// {
// 	int arr[50], i, Size;
// 	int first, second;
	
// 	printf("\n Please Enter the Number of elements in an array  :  ");
// 	scanf("%d", &Size);
	
// 	printf("\n Please Enter %d elements of an Array \n", Size);
// 	for (i = 0; i < Size; i++)
// 	{
// 		scanf("%d", &arr[i]);
//     }
	 
// 	first = second = INT_MIN;  
	   
// 	for (i = 0; i < Size; i++)
// 	{
// 		if(arr[i] > first)
// 		{
// 			second = first; 
// 			first = arr[i];
// 		}
// 		else if(arr[i] > second && arr[i] < first)
// 		{
// 			second = arr[i];
// 		}	
// 	}
// 	printf("\n The Largest Number in this Array =  %d", first);
// 	printf("\n The Second Largest Number in this Array =  %d", second);
	
// 	return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// int main()
// {
// int n,i;
// printf("\nEnter the number of elements : ");
// scanf("%d",&n);
// int arr[n];
// printf("\nInput the array elements : ");
// for(i = 0; i < n; i++)
// {
// scanf("%d",&arr[i]);
// }
// int min = INT_MAX;
// int second_min = INT_MAX ;
// if (n < 2)
// {
// printf("\nInvalid Input");
// }
// for(i = 0; i < n; i++)
// {
// if(arr[i] < min)
// {
// second_min = min;
// min = arr[i];
// }
// }
// for(i = 0; i < n; i++)
// {
// if(arr[i] < second_min && arr[i] != min)
// {
// second_min = arr[i];
// }
// }


// printf("\nThe second smallest element is %d \n", second_min);
// return 0;
// }
// #include <stdio.h>

// void main()
// {
//    int i,n,a[100];
   
//        printf("\n\nRead n number of values in an array and display it in reverse order:\n");
//        printf("------------------------------------------------------------------------\n");
   
//    printf("Input the number of elements to store in the array :");
//    scanf("%d",&n);
   
//    printf("Input %d number of elements in the array :\n",n);
//    for(i=0;i<n;i++)
//       {
// 	  printf("element - %d : ",i);
// 	  scanf("%d",&a[i]);
// 	  }
      
//    printf("\nThe values store into the array are : \n");
//    for(i=0;i<n;i++)
//      {
// 	   printf("% 5d",a[i]);
// 	 }
 
//    printf("\n\nThe values store into the array in reverse are :\n");
//    for(i=n-1;i>=0;i--)
//       {
// 	   printf("% 5d",a[i]);
// 	  }
//    printf("\n\n");
// } 
// #include <stdio.h>

// void main()
// {
//     int arr1[100], arr2[100];
//     int i, n;
	
	
//        printf("\n\nCopy the elements one array into another array :\n");
//        printf("----------------------------------------------------\n");
	   
//        printf("Input the number of elements to be stored in the array :");
//        scanf("%d",&n);
   
//        printf("Input %d elements in the array :\n",n);
//        for(i=0;i<n;i++)
//         {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr1[i]);
// 	    }
//     /* Copy elements of first array into second array.*/ 
//     for(i=0; i<n; i++)
//     {
//         arr2[i] = arr1[i];
//     }

//     /* Prints the elements of first array   */
//     printf("\nThe elements stored in the first array are :\n");
//     for(i=0; i<n; i++)
//     {
//         printf("% 5d", arr1[i]);
//     }

//     /* Prints the elements copied into the second array. */
//     printf("\n\nThe elements copied into the second array are :\n");
//     for(i=0; i<n; i++)
//     {
//         printf("% 5d", arr2[i]);
//     }
// 	       printf("\n\n");
// }

