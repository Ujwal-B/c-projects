#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter sides of triangle\n";
	cin>>a>>b>>c;
	if(a==b==c)
	{
		cout<<"this triangle equilateral triangle\n";
	}
	else if (a!=b!=c)
	{
		cout<<"this triangle is scalene triangle\n";
	}
	else
	{
		if((a == b != c) || (a != b == c))
		{
			cout<<"isosceles triangle\n";
		}
	}

	return 0;
}

