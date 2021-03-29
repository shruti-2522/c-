#include<iostream>
using namespace std;
namespace First
{
    void sayHello()
    {
     cout<<"First Namespace"<<endl;
    }
}

namespace Second
{
    void sayHello()
    {
        cout<<"Seocnd Namespace"<<endl;
    }
}

int main()
{
    First::sayHello();
    Second::sayHello();
}

/*OUTPUT:
First Namespace 
Seocnd Namespace
*/