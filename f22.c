#include <stdio.h>
#include <string.h>
int main()
{
    char *str, c;
    int i = 0, j = 1;
    str = (char *)malloc(sizeof(char));
    printf("Enter String :");
    while (c != '\n')
    {
        /* code */ c = getc(stdin);
        j++;
        str = (chr *)realloc(str, j * sizeof(char));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    printf("\n The entered string is :%s", str);
    free(str);
    return 0;
}
#include <stdio.h>
int main()
{
    int *ptr, c;
    int i = 0, size = 0, sum = 0;
    printf("Enter Size of arry :");
    ptr = (int *)calloc(size, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed \n");
        return 0;
    }
    printf("\n The Enter %d valuse \n", size);
    for (i = 0; i < size; i++)
    {
        /* code */ scanf("%d", ptr + i);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + (ptr + i);
    }
    printf("Average is %d \n", sum / size);
    free(ptr);
    return 0;
}
//  memory like concepts
#include<stdio.h>
int  main(){
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=NULL;
    return 0;
}
// dagling pointer 
#include<stdio.h>
int main(){
    int ptr*;
    ptr=(int*)malloc(sizeof(int));
    *ptr=10;
    printf("Before Free %d \n",*ptr);
    free(ptr);
    printf("After Free &d ",*ptr);
    retrurn 0;
    }