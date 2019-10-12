#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    int a;
public:
    test()
    {   cout<<"Enter the value "<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<"the value of a is :"<<a<<endl;
    }
    void operator ++()
    {
        a--;
    }
};
int main()
{
    test t1;
    t1.display();
    ++t1;
    cout<<"Value After applying unary operator"<<endl;
    t1.display();
    return 0;
}
