#include<iostream>
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

//Friend function decleartiom
 friend void fun(Complex);
    
};
//Friemnd fun def:
void fun(Complex c)
    {
        cout<<"Sum="<<c.a+c.b;
    }
int main()
{
    Complex c1;
    c1.set_data(10,20);
    fun(c1);
}
/*OUTPUT:
Sum=30
*/