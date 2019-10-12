#include<iostream>
#include<conio.h>
using namespace std;
class Int
{
    int x,y;
public:
    Int()
    {
        x=0;
        y=0;
    }
    void get()
    {
        cout<<"Enter the value of x: "<<endl;
        cin>>x;
        cout<<"Enter the value of y: "<<endl;
        cin>>y;
    }
    void show()
    {
        cout<<"value of x is : "<<x<<endl;
        cout<<"value of y is : "<<y<<endl;
    }
    Int operator +(Int i2)
    {
      Int temp;
      temp.x=x+i2.x;
      temp.y=i2.y+y;
      return temp;
    }
};
int main()
{
    Int i1,i2,i3;
    cout<<"Enter the value of first object"<<endl;
    i1.get();
    cout<<"Enter the value of second object"<<endl;
    i2.get();
    i3=i1+i2;
    i3.show();
    return 0;
}
