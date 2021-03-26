#include<iostream>
using namespace std;
class Complex
{
int a,b;
 public:
 //Parameterised constructor:
 Complex(int x,int y)
 {
     a=x;
     b=y;
 }

 void display()
 {
     cout<<"Value of a="<<a<<" "<<endl<<"Value of b="<<b;
 }
};

int main()
{
    Complex c1(10,50);
    c1.display();
}

/*OUTPUT:
Value of a=10 
Value of b=50
*/