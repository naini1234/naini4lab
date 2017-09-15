#include <iostream>
using namespace std;

	int max(int a,int b);
	int min(int a,int b);
	int main(){
	int n1,n2,ma,mi;
	cout<<"enter any two numbers\n";
	cin>>n1>>n2;
	ma=max(n1,n2);
	mi=min(n1,n2);
	cout<<"the maximum of the two numbers is "<<ma<<"\n";
	cout<<"the minimum of the two numbers is "<<mi<<"\n";
	return 0;
}
    int max(int a,int b){
    	if(a>b)
    	{
    		return a;
    	}
    	else if(a<b)
    	{
    		return b;
    	}
    }
    int min(int a,int b){
    	if(a<b)
    	{
    		return a;
    	}
    	else if(b<a)
    	{
    		return b;
    	}
    }