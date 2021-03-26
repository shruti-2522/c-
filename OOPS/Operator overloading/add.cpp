#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
 private:
 int a,b;
 public:
 void set_data(int x,int y)
 {
     a=x;
     b=y;
 }

  Complex operator + (Complex c)
  {
      Complex temp;
      temp.a=a+c.a;
      temp.b=b+c.b;
  }

  void display()
  {
      cout<<"value of a="<<a<<" "<<endl<<"value of b="<<b;
  }



};

int main()
{
 Complex c1,c2,c3;
 c1.set_data(5,6);
 c2.set_data(1,10);
 c3=c1+c2;
 c3.display();
 
}
/*OUTPUT:
value of a=16
value of b=6
*/