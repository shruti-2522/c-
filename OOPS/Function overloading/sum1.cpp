#include<iostream>
using namespace std;
int add(int,int);
float add(float,int);

int add(int a,int b)
{
 return a+b;
}

float add(double a,int b)
{
  return a+b;
}

int main()
{
    int a1=add(10,30);
    float a2=add(0.7,40);
    cout<<"Integer sum="<<a1<<endl;
    cout<<"Float+Integer="<<a2;
}
/*OUTPUT:
Integer sum=40
Float+Integer=40.7
PS F:\C++\OOPS\Function
*/