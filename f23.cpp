// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter a number ";
//     cin>>a>>b;
//     int c= a+b;
//     cout<<"The sum of "<<c;
//     // cout << "Hello"<<endl<<"MySirG"<<endl;
//     // cout << "Hello MySirG";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r;
//     cout << "Enter radius of circle"<<endl;
//     cin >> r;
//     float area = r * r * 3.14;
//     cout << "Are of circle" << area<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter a side of cube"<<endl;
//     cin>>a;
//     int c=a*a;
//     cout<<"Area of cube"<<c<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter three number "<<endl;
//     cin<<a<<b<<c;
//     float d=(a+b+c)/3;
//     cout<<"Average number"<<d;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "sq->" << i * i << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number" << endl;
    cin >> a >> b;
    a = b - a;
    a = b + a;
    b = a - b;
    cout << a << b;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number" << endl;
    cin >> a >> b;
    if (a > b)
    {
        /* code */ cout << "This is number is gratest" << a << endl;
    }
    else
    {
        cout << "This is number is less then as a" << b;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        /* code */ sum = sum + a[i];
    }
    cout << "sum of array" << sum << endl;
    return 0;
}