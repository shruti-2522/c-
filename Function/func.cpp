#include<iostream>
using namespace std;
void fun()
{
    static int i=0;//static variable
    int j=0;//local varible
    i++;
    j++;
    cout<<"i="<<i<<" "<<"j="<<j<<endl;
}

int main()
{
    fun();
    fun();
    fun();
}

/*OUTPUT:
i=1 j=1
i=2 j=1
i=3 j=1
*/