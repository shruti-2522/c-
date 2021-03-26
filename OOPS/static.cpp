#include<iostream>
using namespace std;
class Account
{
    private:
    int bal;///instance variable
    static float roi;//satatic variable

    public:
    void setbal(int x)
    {
     bal=x;
    }

    static void setroi(float r)//static member function
    {
        roi=r;
    }

    void display()
    {
        cout<<"bal="<<bal<<" "<<"Rate Of Intrest="<<roi;
    }
}; 


//static varibale to access:
float Account::roi=67.5f;


int main()
{
 Account a1;
 a1.setbal(5000);
 Account::setroi(45.99f);
 a1.display();
}

/*OUTPUT:
bal=5000 Rate Of Intrest=45.99
*/