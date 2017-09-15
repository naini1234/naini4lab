#include<iostream>
#include<cmath>
using namespace std;
int c(int );
int main(){
     int n, cube;
     cout<<"enter any number\n";
     cin>>n;
     cube= c(n);
     cout<<"the cube of the number is "<<c(n);
     return 0;
}

int c(int a)
{
 int k;
 k=pow(a,3);
 return k;
}

     

   
