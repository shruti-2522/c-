#include<iostream>
#include<conio.h>

using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void set_data(int,int);
    void show_data()
    {
        cout<<"Value of a="<<a<<" "<<"Value of b="<<b<<endl;
    }
};
  void Complex::set_data(int x,int y)
  {
      a=x;
      b=y;
  }


int main()
{
    Complex c1;
    c1.set_data(4,5);
    c1.show_data();
    getch();
}

/*OUTPUT:
Value of a=4 Value of b=5
*/