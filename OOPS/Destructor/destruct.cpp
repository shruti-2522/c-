#include<iostream>
using namespace std;
class Complex
{
    public:
    Complex()
    {
        cout<<"Constructor is called"<<endl;
    }

    ~Complex()
    {
      cout<<"Destuructor is called"<<endl;
    }
};


int main()
{
    Complex c1;
}

/*OUTPUT:
Constructor is called      
Destuructor is called  
*/