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
//     void showtime()
//     {
//         cout << endl
//              << hr << ":" << min << "sec" << endl;
//     }
//     void normalize()
//     {
//         min = min + sec / 60;
//         sec = sec % 60;
//         hr = hr + min / 60;
//         min = min % 60;
//     }
//     Time add(Time t)
//     {
//         Time temp;
//         temp.sec = sec + t.sec;
//         temp.min = min + t.min;
//         temp.hr = hr + t.hr;
//         temp.normalize();
//         return (temp);
//     }
// };
//  int main()
// {
//     Time t1, t2, t3;
//     t1.set(5, 50, 30);
//     t2.set(7, 20, 34);
//     t3 = t1.add(t2);
//     t1.showtime();
//     t2.showtime();
//     t3.showtime();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Cube
// {
// public:
//     double side;
//     double volume()
//     {
//         return (side * side * side);
//     }
//     Cube(double sidel)
//     {
//         cout << "\n constructer is called" << endl;
//         side = sidel;
//     }
//     Cube()
//     {
//         cout << "default constructer" << endl;
//     }
// };
// int main()
// {
//     Cube c1(2);
//     Cube c2;
//     cout << "\n the side of cube  is :" << c1.side << endl;
//     cout << "\n the volume of first cube is :" << c1.volume()<< endl;
//     cout << "\n Enter of the second cube :" << endl;
//     cin >> c2.side;
//     cout << "\n the volume of second cube is " << c2.volume() << endl;
//     return 0;
// }
// #include<iostream>
// using  namespace std;
// class count
// {
// private:
//      int a;
// public:
//    count(){
//      a=0;
//    }
//    void in(){
//     a++;
//    }
//    int get(){
//     return a;
//    }
// };
// int main(){
//     count c1;
//     cout<<"\n Before calling count  function count ";
//     count<<c1.get();
//     c1.in();
//     cout<<"\n After calling count function  count ";
//     cout<<c1.get();
//     cout<<"\n";
//     return 0;

// }
// #include<iostream>
// using namespace std;
// class Date
// {
// private:
//     int dd,mm,yy
// public:
//     Date(){
//         dd=1;
//         mm=11;
//         yy=2023;

//     }
//     void display(){
//         cout<<" DAY"<<" "<<dd<<":"<<mm<<" "<<":"<<yy<<endl;

//     }
    
// };
// int main(){
//     Date d1;
//     d1.display();
//     return 0;

// }
#include<iostream>
using namespace std;

class stu
{
                private:
                    char name[20],add[20];
                        int roll,zip;

                public:
                    stu ();//Constructor
                        ~stu();//Destructor
                        void read();
                        void disp();
};

stu :: stu()
{
        cout<<"\nThis is Student Details constructor called..........."<<endl;
}

void stu :: read()
{
        cout<<"\nEnter the student Name :: ";
        cin>>name;
        cout<<"\nEnter the student roll no :: ";
        cin>>roll;
        cout<<"\nEnter the student address :: ";
        cin>>add;
        cout<<"\nEnter the Zipcode :: ";
        cin>>zip;
}

void stu :: disp()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
        cout<<"\nAddress is :: "<<add<<endl;
        cout<<"\nZipcode is :: "<<zip;
}

stu :: ~stu()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}


int main()
{
        stu s;
    s.read ();
    s.disp ();

    return 0;
}