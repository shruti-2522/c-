#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
    void setdimension(int x,int y,int z)
    {
    l=x;
    b=y;
    h=z;
    }

    void showdimension()
    {
        cout<<"Length="<<l<<" "<<"Breadth="<<b<<" "<<"Height="<<h<<endl;
    }
};

int main()
{
    Box b1,*b2;//*b2 is object ptr
    b2=&b1;
    b2->setdimension(10,20,30);
    b2->showdimension();



}

/*Output:
Length=10 Breadth=20 Height=30
*/