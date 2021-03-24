//CALL BY REFRENCE:YOU CAN MODIFY THE VALUE USING ADDRESS
#include<iostream>
using namespace std;
void swap(int *a,int*b)
{

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=100,b=400;
    cout<<"After swapping value of a=" <<a<<" "<<"value of b="<<b<<endl;
    swap(&a,&b);
    cout<<"Before swapping value of a="<<a<<" "<<"value of b="<<b;
}

/*OUTPUT:
After swapping value of a=100 value of b=400
Before swapping value of a=400 value of b=100
*/