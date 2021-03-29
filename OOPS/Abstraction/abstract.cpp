#include<iostream>
using namespace std;
class shape
{
    public:
     //pure virtuaal func:
     virtual void draw()=0;
};

class Rect:public shape
{
    public:
     void draw()
     {
         cout<<"Draw Rectangle..."<<"\n";
     }


};

class Circle:public Rect
{
    public:
     void draw()
     {
         cout<<"Draw Circle.."<<"\n";
     }
};

int main()
{
    Rect r1;
    Circle c1;
    c1.draw();
    r1.draw();
}

/*OUTPUT:
Draw Circle..
Draw Rectangle...
*/