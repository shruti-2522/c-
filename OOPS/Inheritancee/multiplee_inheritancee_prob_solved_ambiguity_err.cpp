//AMBIGUITY ERROR SOLVEED BY SCOPE RESOLUTION OPERATOR:
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"Hello World"<<endl;
    }

};

class B
{
 public:
 void display()
 {
     cout<<"Hello shruti"<<endl;
 }

};

class C:public A,public B
{
 public:
 void view()
 {
  A::display();
  B::display();
 }

};

int main()
{
    C c1;
    c1.A::display();
}

/*OUTPUT:
Hello World
*/
