#include<iostream>
using namespace std;
namespace First
{
    void sayHello()
    {
     cout<<"Fist namespcae hello"<<endl;
    }
}

namespace Second
{
  void sayHello()
  {
      cout<<"Seocnd naamesppace hello";
  }
}

using namespace First;
int main()
{
    sayHello();
}

/*OUTPUT:

Fist namespcae hello    
*/