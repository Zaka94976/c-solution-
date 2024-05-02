// #include <stdio.h>
// void naturalnumber(int );
// void evennaturalnumber(int);
//  void sqrnaturalnumber(int);
// int main()
// {
//     int n;
//     printf("Enter number\n");
//     scanf("%d", &n);
//     naturalnumber(n);
//     // evennaturalnumber(n);
//     // oddnaturalnumber(n);
//     // sqrnaturalnumber(n);
//     return 0;
// }
// void naturalnumber(int n){
//     if(n==0){
//         return ;
//     }
//     printf("%d\n",n);
//      naturalnumber(n-1);
    //  printf("%d\n",n);   This code acending oder;
// }
//  void oddnaturalnumber(int n){
//       if(n==0){
//         return ;
//       }
//       oddnaturalnumber(n-1);
//       printf("%d\n",2*n-1);
//  }
// void evennaturalnumber(int n)
// {
//     if (n == 1)
//     {
//         return;
//     }
//      printf("%d\n", 2 * n - 2);
//     evennaturalnumber(n - 1);
//     // printf("%d\n", 2 * n - 2);
// }
//  void sqrnaturalnumber(int n){
//      if(n==1){
//         return;
//      }
//     sqrnaturalnumber(n-1);
//     printf("%d\n",n*n);

//  }
 #include<stdio.h>
void dtb(int );
int main(){
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    dtb(n);
    return 0;
}
void dtb(int n){
    if(n>0){
        dtb(n/2);
        printf("%d",n%2);
    }
}