#include<iostream>
using namespace std;
class Account
{
    public:
    float salry=75000;
};

class Progr:public Account
{
 public:
 float bonus=700;

};

int main()
{
    Progr p1;
    cout<<"Salary is="<<p1.salry<<endl;
    cout<<"Bonus is="<<p1.bonus;
    return 0;
}
/*OUTPUT:
Salary is=75000
Bonus is=700
*/