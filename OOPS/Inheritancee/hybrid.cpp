#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void geta()
    {
        std::cout<<"Enter Value of a="<<std::endl;
        cin>>a;
    }
};

class B:public A
{
protected:
int b;
void getb()
{
    std::cout<<"Enter Value of b="<<std::endl;
    cin>>b;
}

};

class C
{
    protected:
    int c;
    public:
    void getc()
    {
        std::cout<<"Enter Value of c="<<std::endl;
        cin>>c;
    }
};


class D:public B,public C
{
    protected:
    int d;
    public:
    void mult()
    {
    geta();
    getb();
    getc();
    cout<<"Multiplication="<<a*b*c;
 }

};

int main()
{
     D d;  
    d.mult();  
    return 0;  
}
/*OUTPUT:
Enter Value of a=
1
Enter Value of b=
4
Enter Value of c=
5
Multiplication=20
*/