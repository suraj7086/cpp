#include<iostream>
#include<conio.h>
using namespace std;

long fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	return (n*fact(n-1));

}
int main()
{   //Recursive Function
    int num;
	cout<<"program to find the factorial of a number"<<endl;
	cout<<"Enter the number"<<endl;
	cin>>num;
	cout<<"factorial of the Entered number "<<num<<" is : "<<fact(num)<<endl;
	return 0;


}
