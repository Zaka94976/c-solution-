// #include <stdio.h>
// int main() {
//     char s[] = "Programming is fun";
//     int i,j;

//     for (i = 0; s[i] != '\0'; ++i);

//     printf("Length of the string: %d", i);
//     for ( j = i; j <0; j--);
//     printf("%c",s[j]);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[40]; // declare the size of character string
//     printf (" \n Enter a string to be reversed: ");
//     scanf ("%s", str);

//     // use strrev() function to reverse a string
//     printf (" \n After the reverse of a string: %s ", strrev(str));
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//    char str1[20];  // declaration of char array
//    char str2[20];  // declaration of char array
//    int value; // declaration of integer variable
//    printf("Enter the first string : ");
//    scanf("%s",str1);
//    printf("Enter the second string : ");
//    scanf("%s",str2);
//    // comparing both the strings using strcmp() function
//    value=strcmp(str1,str2);
//    if(value==0)
//    printf("strings are same");
//    else
//    printf("strings are not same");
//    return 0;
// }
// #include <stdio.h>

// #include <string.h>

// int main()

// {

//   char str[100];

// printf("Enter a string: ");

// fgets(str, 100, stdin);

// strupr(str);

// printf("Uppercase string: %s\n", str);

//   return 0;

// }
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[30] = "Apple BANANA";

//     char result[30];
//     for (int i = 0; str[i] != '\0'; i++) {
//         result[i] = tolower(str[i]);
//     }

//     printf("Input string      : %s\n", str);
//     printf("Lowercase string  : %s\n", result);

//     return 0;
// }
// #include <stdio.h>

// int isAlphaNumeric(char ch)
// {
//     if ((ch >= '0' & ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//         return 1;

//     return 0;
// }

// int main()
// {
//     char ch = 0;

//     printf("Enter character: ");
//     scanf("%c", &ch);

//     if (isAlphaNumeric(ch))
//         printf("Given character is an alphanumeric character\n");
//     else
//         printf("Given character is not an alphanumeric character\n");

//     return 0;
// }
// C implementation to check if a given
// string is palindrome or not
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[] = { "abbba" };

// 	// Start from leftmost and
// 	// rightmost corners of str
// 	int l = 0;
// 	int h = strlen(str) - 1;

// 	// Keep comparing characters
// 	// while they are same
// 	while (h > l) {
// 		if (str[l++] != str[h--]) {
// 			printf("%s is not a palindrome\n", str);
// 			return 0;
// 			// will return from here
// 		}
// 	}

// 	printf("%s is a palindrome\n", str);

// 	return 0;
// }
// #include<stdio.h>
// int main(){
// 	int a[]="Hi Md Zakaullah ";
// 	int count=0,int i=0;
// 	if(a[i]=='   ' ||a[i+1]!='  '){
// 		count++;
// 		i++;
// 	}
// 	printf("%d",count);
// 	return 0;
// }
// #include <stdio.h>
// #include<string.h>
// void swap(cahr a[], int i, int j)
// {
// 	char temp;
// 	while (i < j)
// 	{
// 		temp = a[i];
// 		a[i] = a[j];
// 		a[j] = temp;
// 		i++;
// 		j++
// 	}
// }
// int main()
// {
// 	char a[] = "Hi Md Zakaullah what are do";
// 	int i = 0, start = 0, end = 0, flag = 0;
// 	while (a[i] != '\0')
// 	{
// 		while (a[i] != ' ')
// 		{
// 			if (a[i] == '\0')
// 			{
// 				flag = 1;
// 				break;
// 			}
// 			end++;
// 			i++;
// 		}
// 		swap(a, start, end - 1);
// 		if (flag == 1)
// 		{
// 			/* code */ break;
// 		}
// 		start = end++;
// 		i++;
// 	}
// 	swap(a,0,i-1);
// 	printf("%s",a);
// 	return 0;
// }
