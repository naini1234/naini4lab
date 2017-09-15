#include <iostream>
using namespace std;

int f(int a);
int main() {
	int n,eo;
	cout<<"enter any number\n";
	cin>>n;
	eo=f(n);
	if (eo==0)
	{
		cout<<"the number is even";
	}
	else
	{
		cout<<"the number is odd";
	}
	return 0;
}
int f(int a)
{
	if(a%2==0)
	{
	    return 0;
	}
	else 
	return 1;
}
