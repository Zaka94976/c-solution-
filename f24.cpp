// #include<iostream>
// using namespace std;
// int prime(int x){
//     int flag=0;
//     for (int  i = 2; i <= n/2; i++)
//     {
//         /* code */
//         if(n%i==0){
//             flag =1;
//         }
//         return flag;
//     }
    
// }
// int main(){
//     int x=5;
//     if((prime(x)==1)){
//         cout<<"Number is prime ";
//     }
//     else{
//         cout<<"Number is not prime";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int maxm(int n){
//     int max=-1;
//     while (x)
//     {
//         /* code */
//         x=x%10;
//         if(x>max){
//             max=x;
//         }
//         x=x/10;
//     }
//     return max;
    
// }
// int main(){
//     int x;
//     cin>>x;
//     cout<<maxm(x);
//     return 0;

// }
#include<iostream>
using namespace std;
int pow(int x,int y){
    int a=1;
    while (y--)
    {
        /* code */
        a=a*x;
    }
    return a;
}
int main(){
    int x,y;
    cout<<"Enter number"<<endl;
    cin>>x>>y;
    cout<<pow(x,y);
    return 0;
}
#include<iostream>
using namespace std;
int fact(int x){
    if(x<=0){
        return 1;
    }
    int fac=1;
    for (int  i = 1; i < x; i++)
    {
        /* code */
        fac=fac*i;
    }
    return fac;
    
}
int com(int n,int r){
    int com=fac(n)/fac(r)*fac(n-r);
    return com;
}

int main(){
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j <=i; j++)
        {
            /* code */
            int k=0;
            if(j==0){
                while (k++ <=(2-i+1))
                {
                    /* code */cout<<"  ";
                }
                
            }
            cout<<com(i,j);

        }
        cout<<endl;
        
    }
    
 return 0;
}
#include<iostream>
using namespace std;
int fbi(int x){
    int f1=1,f2=1 ,temp;
    if(x<=2){return 1;}
    for (int  i = 3; i <=n; i++)
    {
        /* code */
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return f2;
    
}
int main(){
    int x,flag=0;
    cin<<x;
    for (int  i = 0; ; i++)
    {
        /* code */ int value=fabi(i);
        cout<<value;
        if(x==value){
            flag=1;
            break;
        }
        if(value>n){
            break;
        }
    
    }
    cout<<endl;
    if(flag==1){
        cout<<"Number is in fibonacci";

            }
    else{
        cout<<"Number is not fibonacco"<<endl;

    }
    return 0;

}
#include<iostream>
using namespace std;
int swp( int &x,&y){
    int temp;
    temp=x;
    x=y;
    y=temp;
  return (x,y);
}
int main(){
    int x=4,y=5;
    cout<<swp(x,y);
    return 0;
}
#include<iostream>
using namespace std;
int add(int x,int y,int z =0){
   return x+y+z
}

int main(){
    cout<<add(1,2);
    cout<<add(1,2,3);
    return 0;
}
#include<iostream>
using namespace std;
int area(int c){
    return 3.14*r*;
}
int area(int a,int b){
    return (a*b)/2;
}
int area(int a,int b){
    return (a*b);
}
int main(){
    int r;
    cin>>r;
   cout<<area(r);
    int l,b;
    cin>>l>>b;
    cout<<area(l,b);
    int a,b;
    cin>>a>>b;
    cout<<area(a,b);


}
#include<iostream>
using namespace std;
int max(int r){
    return r;

}
int max(float x){
    return x;

}
int main(){

    int a,x=-1;
    cin>>a;
    float b;
    cin>>b;
    if(x<a){
        cout<<"It ios grater number"<<a<<endl;
    }
    else if (x<b)
    {
        cout<<"It is gratest number"<<b<<endl;
    }
    

}