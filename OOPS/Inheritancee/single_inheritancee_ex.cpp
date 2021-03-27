#include<iostream>
using namespace std;

class number
{
 public:
 int a=5,b=9,c;

 int multiplication()
 {
  c=a*b;
  return c; 
 }
};

class mult:public number
{
    public:
    void display()
    {
        int result=multiplication();
        cout<<"Multiplication="<<result;
    }
};

int main()
{
    mult m;
    m.multiplication();
    m.display();
}

/*OUTPUT:
Multiplication=45
*/