//SWAPPING WITHOUT THIRD VARIBAL USING PTR:
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,*p1=&a,*p2=&b;

    cout<<"Before swapping a="<<*p1<<" "<<"b="<<*p2<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    cout<<"After Swapping a="<<*p1<<" "<<"b="<<*p2;

}


/*OUTPUT:
Before swapping a=10 b=20
After Swapping a=20 b=10
*/