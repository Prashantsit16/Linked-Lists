//Prashant
//23070123102
#include<iostream>
using namespace std;
int main()
{
  float a,b;
  float div;
  cout<<"Enter 1st number: ";
  cin>>a;
  cout<<"Enter 2nd number: ";
  cin>>b;
  try{
    if(b==0)
    {
        throw b;
    }
    cout<<"The division is "<< a/b;
  }
catch (const float n)
{
    cout<< "Divide by "<<n;
}
}