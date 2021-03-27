#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void get_a(int n)
    {
    a=n;
    }
};

class B
{
    protected:
    int b;
    public:
    void get_b(int n)
    {
        b=n;
    }

};

class C:public A,public B
{
    public:
    void display()
    {
    
        cout<<"The value of a="<<a<<endl;
        cout<<"Thee value of b="<<b<<endl;
        cout<<"Sum="<<a+b;
    }

};

int main()
{
    C a1;
    a1.get_a(10);
    a1.get_b(20);
    a1.display();
    

}

/*OUTPUT:
The value of a=10
Thee value of b=20
Sum=30
*/