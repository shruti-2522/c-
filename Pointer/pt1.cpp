//POINTER
#include<iostream>
using namespace std;
int main()
{
    int num=300;
    int *p;
    p=&num;

    cout<<"Address of Number Variable is:"<<&num<<endl;
    cout<<"Address of p is:"<<p<<endl;
    cout<<"value of p variable is:"<<*p<<endl;
    return 0;


}

/*OUTPUT:
Address of Number Variable is:0x61ff08
Address of p is:0x61ff08
value of p variable is:300
*/