#include<iostream>
using namespace std;
#include<conio.h>
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
      void show_data()
    {
        cout<<"Value of a="<<a<<" "<<"Value of b="<<b;
    }

    Complex operator -()
    {
        Complex temp;
        temp.a=-a;
        temp.b=-b;
     
        return(temp);
    }

  

};
int main()
{
 Complex c1,c2;
 c1.set_data(5,7);
 c2=-c1;
 c2.show_data();
}

/*
OUTPUT:
  Value of a=-5 Value of b=-7
*/