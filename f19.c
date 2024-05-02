// #include <stdio.h>
// int main()
// {
//     char a[3][20];
//     int i, j, vowel = 0;
//     for (i = 0; i < 3; i++)
//     {
//         fgets(a[i], 20, stdin);
//     }
//     for (i = 0; i < 3; i++)
//     {
//         /* code */ for (j = 0; a[i][j] != '\0'; j++)
//         {
//             /* code */ if (a[i][j] == 'a' || a[i][j] == 'e' || a[i][j] == 'i' || a[i][j] == 'o' || a[i][j] == 'u')
//             {
//                 /* code */ vowel++;
//             }
//         }
//         printf("%s=%d\n", a[i], vowel);
//         vowel = 0;
//     }
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char a[10][20], t[20];   
//     int i, j;
//     for (i = 0; i < 3; i++)
//     {
//         gets(a[i]);
//     }
//     for (i = 0; i < 2; i++)
//     {
//         for (j = i + 1; j < 3; j++)
//         {
//             if (strcmp(a[i], a[j]) > 0)
//             {
//                 strcpy(t, a[i]);
//                 strcpy(a[i], a[j]);
//                 strcpy(a[j], t);
//             }
//         }
//     }
//     for ( i = 0; i < 3; i++)
//     {
//         printf("%s\n",a[i]);
//     }
//     return 0;

// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[20][20];
//     int i, j;
//     for (i = 0; i < 3; i++)
//     {
//         gets(a[i]);
//     }
//     for (i = 0; i < 3; i++)
//     {
//         if (strcmp(a[i], "MD") == 0)
//         {
//             printf("String found");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[20][20];
//     int i, j;
//     for (i = 0; i < 3; i++)
//     {
//         gets(a[i]);
//     }
//     for (i = 0; i < 3; i++)
//     {
//         if (strchr(a[i],'@') != 0)
//         {
//             printf("String found");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>
// #include <stdlib.h>
// int main()
// {
//     char ip[] = "123.134.12.13";
//     char *a = strtok(ip, " .");
//     while (a != NULL)
//     {
//         int x = atoi(a);
//         if ((x >= 0) && (x <= 255))
//         {
//             printf("%d", x);
//         }
//         a = strtok(NULL, ".");
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char words[4][20] = {"my", "name", "is", "zka"};
    char word1[] = "my";
    char word2[] = "zka";
    int i, w1 = -1, w2 = -1, min = 1000, temp;
    for (i = 0; i < 4; i++)
    {
        if (strcmp(words[i], word1) == 0)
        {
            w1 = i; /* code */
        }
        if (strcmp(words[i], word2) == 0)
        {
            w2 = i; /* code */
        }
        if (w1 != -1 && w2 != -1)
        {
            temp = abs(w2 - w1);
            if (temp < min)
            {
                min = temp;
            }
        }
    }
    printf("%d", min - 1);
    return 0;
}