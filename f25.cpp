// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     /* data */
//     int real, img;

// public:
//     void set( int x,int y )
//     {
//          real=x;
//         img=y;
//     }
//     void display()
//     {
//         cout <<real<< " +" <<img<<"i"<<endl;
//     }
// };
// int main()
// {
//     complex c1;
//     c1.set(2,3);
//     c1.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Time
// {
// private:
//     int hr, min, sec;

// public:
//     void set(int x, int y, int z)
//     {

//         hr = x;
//         min = y;
//         sec = z;
//     }
//     void display()
//     {
//         cout << hr <<" "<< "hr" <<" "<< min <<" "<< "min" <<" "<< sec <<" "<< "sec" << endl;
//     }
// };
// int main()
// {
//     Time t1;
//     t1.set(3, 45, 20);
//     t1.display();
//     return 0;
// }
// #include<iostream>
// using namespace std;
//  class Factorial
//  {
//  private:
//      int a;
//  public:
//  void set(int x){
//     a=x;
//  }
//  void display(){
//     int fact=1;
//     for (int  i = 1; i<=a; i++)
//     {
//         /* code */fact=fact*i;

//     }
//     cout<<fact;

//  }

//  };
// int main(){
//   Factorial f1;
//   f1.set(5);
//   f1.display();
//   return 0;

// }
// #include<iostream>
// using namespace std;
// class LargestNimber
// {
// private:
//     int a,b,c;
// public:
//    void set ( int x,int y, int z){
//     a=x;
//     b=y;
//     c=z;
//    }
//    void display(){
//       if (a>b && a>c)
//       {
//         /* code */ cout<<"It is largest number"<<a<< endl;

//       }
//       else if (b>c)
//       {
//         /* code */cout<<"It is largest number "<<b<<endl;
//       }
//       else{
//            cout<<"It is largest number "<<c<<endl;
//       }

//    }

// };
// int main(){
//     LargestNimber l1;
//     l1.set(5,8,2);
//     l1.display();
//     return 0;

// // }
// #include <iostream>
// using namespace std;
// class ReverseNumber
// {
// private:
//     int a;

// public:
//     void set(int x)
//     {
//         a = x;
//     }
//     void display()
//     {
//         int rem, rev = 0;
//         while (a > 0)
//         {
//             rem = a % 10;
//             rev = (rev *10) + rem;
//             a= a / 10;
//         }
//         cout<<"reverse Number"<<<<""<<rev<<endl;
//     }
// };
// int main()
// {
//     ReverseNumber r1;
//     r1.set(123);
//     r1.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Square
// {
// private:
//     int a;

// public:
//     void set(int x)
//     {
//         a = x;
//     }
//     void display()
//     {
//         for (int i = a;; i++)
//         {
//             /* code */ cout << i * i;
//             break;
//         }
//     }
// };
// int main()
// {
//     Square s1;
//     s1.set(5);
//     s1.display();
//     return 0;
// }
#include<iostream>
using namespace std;
class Area
{
private:
    int r,l,a,b
public:
   void set(int r,int l=0,int a=0,int b=0);
   void display();
};

 void Area ::set( int x,int y=0,int z=0,int w=0)
{
    r=x;
    l=y;
    a=z;
    b=w;
    
}
void Area::display()
{ 
    
}

int main(){

}