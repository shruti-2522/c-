#include<iostream>
using namespace std;

class Complex
{
    private:
    int a,b;

   public:
   void setData(int x,int y)
   {
       a=x;
       b=y;
   }

   void showdata()
   {
       cout<<"a="<<a<<" "<<"b="<<b;
   }

   friend Complex operator -(Complex);


};

Complex operator -(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
}

int main()
{
    Complex c1,c2;
    c1.setData(5,5);
   
    c2=-c1;
    c2.showdata();
}
/*OUTPUT:

a=-5 b=5
*/