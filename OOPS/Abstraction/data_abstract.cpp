#include<iostream>
using namespace std;
class sum
{
    private:
    int x,y,z;
    public:
    void add()
    {
        cout<<"Enter Two numbers:"<<endl;
        cin>>x>>y;

        z=x+y;
        cout<<"Sum="<<z;

    }
};

int main()
{
    sum s1;
    s1.add();
}

/*OUTPUT:
4
4
Sum=8
*/