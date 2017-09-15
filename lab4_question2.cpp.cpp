#include<iostream>
using namespace std;
float d(float );
float a(float );
float c(float );
int main(){
   float r,diameter;
   float area,circumference;
   cout<<"enter the radius of a circle\n";
   cin>>r;
   diameter=d(r);
   cout<<"the diameter is "<<d(r)<<"\n";
   area=a(r);
   cout<<"the area is "<<a(r)<<"\n";
   circumference=c(r);
   cout<<"the circumference is "<<c(r)<<"\n";
   return 0;
}

float d(float r)
{
 float i;
 i=2*r;
 return i;
}
float a(float r)
{
 float j;
 j=3.14*r*r;
 return j;
}
float c(float r)
{
 float k;
 k=2*3.14*r;
 return k;
}
