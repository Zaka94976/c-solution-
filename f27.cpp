// #include <iostream>
// using namespace std;
// class Complex
// {
// private:
//     /* data */ int num1, num2;

// public:
//     void accept()
//     {
//         cout << "\n Enter two compelx number";
//         cin >> num1 >> num2;
//     }
//     friend Complex operator+(Complex c1, Complex c2);
//     friend Complex operator-(Complex c1, Complex c2);
//     friend Complex operator*(Complex c1, Complex c2);
//     bool operator==(const Complex &d)
//     {
//         if (num1 == d.num1 && num2 == d.num2)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void display()
//     {
//         cout << num1 << "+" << num2 << "i" << endl;
//     }
// };
// Complex operator+(Complex c1, Complex c2)
// {
//     Complex c;
//     c.num1 = c1.num1 + c2.num1;
//     c.num2 = c1.num2 + c2.num2;
//     return (c);
// }
// Complex operator-(Complex c1, Complex c2)
// {
//     Complex c;
//     c.num1 = c1.num1 - c2.num1;
//     c.num2 = c1.num2 - c2.num2;
//     return (c);
// }
// Complex operator*(Complex c1, Complex c2)
// {
//     Complex c;
//     c.num1 = c1.num1 * c2.num1;
//     c.num2 = c1.num2 * c2.num2;
//     return (c);
// }

// int main()
// {
//     Complex c1, c2, sum;
//     c1.accept();
//     c2.accept();
//     sum = c1 + c2;
//     sum.display();
//     Complex sub;
//     sub = c1 - c2;
//     sub.display();
//     Complex d1, d2;
//     d1.accept();
//     d2.accept();
//     if (d1 == d2)
//     {
//         cout << "Equivalent\n";
//     }
//     else
//     {
//         cout << "Not Equivalent";
//     }
//     // d1.show(d2);

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class inrement
// {
// private:
//     /* data */
//     int x;

// public:
//     void set(int y)
//     {
//         x = y;
//     }
//     void dispaly()
//     {
//         cout << "Increment number is \n"
//              << x << endl;
//     }
//     inrement operator++(int)
//     {
//         inrement i;
//         i.x = x++;
//         return (i);
//     }
//     //    inrement operator++(){
//     //      inrement i;
//     //      i.x=++x;
//     //      return (i);
//     //    }
// };
// int main()
// {
//     inrement i1, i2;
//     i1.set(4);
//     i1.dispaly()
//         //  i2=++i1;
//         i2 = i1++;
//     i2.set();
//     i2.dispaly();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Time
// {
// private:
//     /* data */
//     int hr, min, sec;

// public:
//     Time()
//     {
//         hr = min = sec = 0;
//     }
//     friend int operator>>(istream &input, Time t)
//     {
//         cout << "\n Enter Hours :" << endl;
//         input >> t.hr;
//         cout << "\n Enter Minute :" << endl;
//         input >> t.min;
//         cout << "\n Enter second :" << endl;
//         input >> t.sec;
//         t.min = t.min + t.sec / 60;
//         t.sec %= 60;
//         t.hr = t.hr + t.min / 60;
//         t.min %= 60;
//         if (t.hr > 25)
//         {
//             /* code */ return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     friend void operator<<(ostream &output, Time &t)
//     {
//         output << "\n Hours :" << t.hr << endl;
//         output << "\n Minutes :" << t.min << endl;
//         output << "\n Seconds :" << t.sec << endl;
//     }
//     int operator==(Time t)
//     {
//         int totl = hr * 3600 + min * 60 + sec;
//         int totl1 = t.hr * 3600 + t.min * 60 + t.sec;
//         if (totl == totl1)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// };
// int main()
// {
//     Time t, t1;
//     cout << "\n Enter first time";
//     cout << "\n*****************************";
//     if (cin >> t)
//     {
//         cout << "\n invalide Time ";
//         return 0;
//     }
//     cout << "\n First time";
//     cout << t;
//     if (cin >> t1)
//     {
//         cout << "\n invalide Time ";
//         return 0;
//     }
//     cout << "\n First time";
//     cout << t1;
//     if (t == t1)
//     {
//         /* code */ cout << "\n time are same";
//     }
//     else
//     {
//         cout << "\n time are diffrents";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Number
// {
// private:
//     int x, y, z;

// public:
//     void accept()
//     {
//         cout << "Enter three number\n";
//         cout << "____________________________________\n";
//         cout << "First number\n";
//         cin >> x;
//         cout << "second number\n";
//         cin >> y;
//         cout << "Third number\n";
//         cin >> z;
//     }
//     void display()
//     {
//         cout << " " << x << "\t" << y << "\t" << z;
//     }
//     void operator-()
//     {
//         x = -x;
//         y = -y;
//         z = -z;
//     }
// };
// int main()
// {
//     Number num;
//     num.accept();
//     cout << "\n Number are :\n\n";
//     num.display();
//     -num;
//     cout << "Negative number\n";
//     num.display();
//     return 0;
// }
// #include <iostream>
// #include<string.h>
// using namespace std;
// class CString
// {
// public:
//     char str[20];
//     void get_String()
//     {
//         cout << "\n Enter String" << endl;
//         cin >> str;
//     }
//     void display()
//     {
//         cout << str << endl;
//     }
//     CString operator+(CString x)
//     {
//         CString s;
//         strcpy(s.str, str);
//         strcat(s.str, x.str);
//         return s;
//     }
//     int operator==(CString &t);
// };
// int CString::operator==(CString &t)
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         /* code */ for (int j = 0; t.str[j] != '\0'; j++)
//         {
//             /* code */ if (str[i] == t.str[j])
//             {
//                 /* code */ return 0;
//             }
//             else
//             {
//                 return 1;
//             }
//         }
//     }
// }
// int main()
// {
//     CString str1, str2, str3;
//     str1.get_String();
//     str2.get_String();
//     cout << "\n___________________________________";
//     cout << "\n\n First String";
//     str1.display();
//     cout << "\n\n Second String";
//     str2.display();
//     cout << "\n___________________________________";
//     str3 = str1 + str2;
//     cout << "\n Concatinate String";
//     int result = 0;
//     result = str1 == str2;
//     if (result == 0)
//     {
//         /* code */ cout << "Both String is equal";
//     }
//     else
//     {
//         cout << "\n Both String is not equal";
//     }

//     return 0;
// }
#include<iostream>
using namespacestd;
