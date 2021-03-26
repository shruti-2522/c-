#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void set_data(int,int);
    void show_data()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }

  Complex add(Complex c)
  {
      Complex temp;
      temp.a=a+c.a;
      temp.b=b+c.b;
      return(temp);

  }
};

void Complex::set_data(int x,int y)
{
    a=x;
    b=y;
}

int main()
{
    Complex c1,c2,c3;
    c1.set_data(5,4);
    c2.set_data(10,10);
    c3=c1.add(c2);
    c3.show_data();
}

/*OUTPUT:
a=15 b=14
*/