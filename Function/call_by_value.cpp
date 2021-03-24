/*CALLL BY VALUE:,value being passed to the function is locally stored by the function parameter in stack memory location. 
If you change the value of function parameter, it is changed for the current function only. 
It will not change the value of variable inside the caller method such as main().*/

#include<iostream>
using namespace std;
void  func(int data);
int main()
{
 int data=3;
 func(data);
 cout<<"Data is="<<data;
 return 0;
}


void func(int data)
{
    data=5;
}

/*output:
Data is=3
*/