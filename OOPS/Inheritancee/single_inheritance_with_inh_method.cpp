#include<iostream>
using namespace std;

class Account
{
    public:
      void eat()
      {
          cout<<"Eating..."<<endl;
      }

};

class B:public Account
{
    public:
    void bark()
    {
        cout<<"Barking..."<<endl;
    }
};

int main()
{
    B a;
    a.eat();
    a.bark();
}

/*OUTPUT:
Eating...
Barking...
*/