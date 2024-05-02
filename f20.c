// #include<stdio.h>
// int  swap(int *, int *);
// int main(){
//     int a,b;
//     printf("Enter number\n");
//     scanf("%d%d",&a,&b);
//     swap(&a,&b); 
//    printf("%d %d",a,b);
//     return 0;
// }
// int swap(int *x, int *y){
//     int tem;
//     tem=*x;
//     *x=*y;
//     *y=tem;
// }
// #include<stdio.h>
// #include<string.h>
// void swap( char **x,char **y){
//     char *temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     char *a[10], *b[10];
//     printf("Enter  2 String\n");
//     gets(a);
//     gets(b);
//     swap(&a,&b);
//     printf("%s %s",a,b);
//     return 0;
// }
// #include<stdio.h>
// void sort(int *ptr,int size){
//     int i,j,temp;
//     for ( i = 0; i <size-1; i++)
//     {
//         for (j = i; j <size; j++)
//         {
//             if(ptr[i]>ptr[j]){
//                 temp=ptr[i];
//                 ptr[i]=ptr[j];
//                 ptr[j]=temp;
//             }
//         }
        
//     }
    
// }
// int main(){
//     int a[]={1,4,7,8,9,2,5,5,6,7},i;
//     sort(a,10);
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d   ",a[i]);
//     }
    
//  return 0;
// }
// #include <stdio.h>

// int main() {
//     int num1, num2;
    
//     // Input the two numbers
//     printf("Enter the first number: ");
//     scanf("%d", &num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     // Declare a pointer to int
//     int *ptr;

//     // Assign the address of num1 to the pointer
//     ptr = &num1;

//     // Check if num2 is greater than the value pointed to by ptr
//     if (*ptr < num2) {
//         ptr = &num2; // If num2 is greater, update the pointer
//     }

//     // Print the maximum number
//     printf("The maximum number is: %d\n", *ptr);

//     return 0;
// }
// #include <stdio.h>
// int calculateLength(char*);
 
// void main() 
// {
//    char str1[25];
//    int l;
// 	printf("\n\n Pointer : Calculate the length of the string :\n"); 
// 	printf("---------------------------------------------------\n");
   
//    printf(" Input a string : ");
//    fgets(str1, sizeof str1, stdin);
   
//    l = calculateLength(str1);
//    printf(" The length of the given string %s is : %d ", str1, l-1);
//    printf("\n\n");

// }
 
// int calculateLength(char* ch) // ch = base address of array str1 ( &str1[0]  )
// {
//    int ctr = 0;
//    while (*ch != '\0') 
//    {
//       ctr++;
//       ch++;
//    }
//    return ctr;
// }
// #include <stdio.h>
// int main()
// {
//     char str1[50];
//     char *pt;
//     int  ctrV,ctrC;
//  	printf("\n\n Pointer : Count the number of vowels and consonants :\n"); 
// 	printf("----------------------------------------------------------\n");	    
//     printf(" Input a string: ");
//     fgets(str1, sizeof str1, stdin);
     
//     //assign address of str1 to pt
//     pt=str1;
     
//     ctrV=ctrC=0;
//     while(*pt!='\0')
//     {
//         if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
//             ctrV++;
//         else
//             ctrC++;
//         pt++; //pointer is increasing for searching the next character
//     }
     
//     printf(" Number of vowels : %d\n Number of consonants : %d\n",ctrV,ctrC-1);        
//     return 0;
// }
// #include <stdio.h>
// void main() 
// {
//    int arr1[10];
//    int i,n, sum = 0;
//    int *pt;
   
//  	printf("\n\n Pointer : Sum of all elements in an array :\n"); 
// 	printf("------------------------------------------------\n"); 
	
//    printf(" Input the number of elements to store in the array (max 10) : ");
//    scanf("%d",&n);
   
//    printf(" Input %d number of elements in the array : \n",n);
//    for(i=0;i<n;i++)
//       {
// 	  printf(" element - %d : ",i+1);
// 	  scanf("%d",&arr1[i]);
// 	  } 	

//    pt = arr1; // pt store the base address of array arr1
 
//    for (i = 0; i < n; i++) {
//       sum = sum + *pt;
//       pt++;
//    }
 
//    printf(" The sum of array is : %d\n\n", sum);
// }
#include <stdio.h>
void main() 
{
   int n, i, arr1[15];
   int *pt;
 	printf("\n\n Pointer : Print the elements of an array in reverse order :\n"); 
	printf("----------------------------------------------------------------\n");
	
   printf(" Input the number of elements to store in the array (max 15) : ");
   scanf("%d",&n);
   pt = &arr1[0];  // pt stores the address of base array arr1 
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",pt);//accept the address of the value
	  pt++;
	  } 	
	
   pt = &arr1[n - 1];

   printf("\n The elements of array in reverse order are :");

   for (i = n; i > 0; i--) 
   {
      printf("\n element - %d : %d  ", i, *pt);
      pt--;
   }
printf("\n\n");
}




