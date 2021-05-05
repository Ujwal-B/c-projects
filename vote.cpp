#include<iostream>
using namespace std;
int main()
{
        int a;
        cout<<"please enter the age of candidate\n";
	cin>>a;
        if(a>=18)
        {
                cout<<"this person is eligible to vote\n";
        }
        else
        {
                cout<<"this person is not eligible to vote\n";
        }
        return 0;
}                                          
