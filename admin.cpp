#include<iostream>
using namespace std;
int main()
{
	int math,phy,chem;
	cout<<"enter total marks\n";
	cin>>math>>phy>>chem;
	if(math+phy+chem>=230)
	{
		cout<<"the candidate is eligible for admmision without donation\n";
	}
	else
	{
		cout<<"the candidate is not eligible for admmision without donation\n";
	}
	return 0;
}

