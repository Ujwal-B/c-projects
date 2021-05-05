#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 3 numbers\n";
	cin>>a>>b>>c;
	if(a>b)
	{
		cout<<"a is the largest number\n";
	}
	else if(b>c)
	{
		cout<<"b is the largest number\n";
	}
	else if(c>b)
	{
		cout<<"c is the largest number\n";
	}
	return 0;
}
