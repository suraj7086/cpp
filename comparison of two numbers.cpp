#include<iostream>
using namespace std;
int main()
{   //comparison between two numbers.
    int a,b;
    //you can take array also to compare the list
    cout<<"Enter the numbers to be compared"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"greater number is "<<a;
    }
    else if(a=b)
    {
        cout<<a<<" is equal to "<<b;
    }
    else
    {
     cout<<"Greater number is "<<b;
    }
    return 0;
}
