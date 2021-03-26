#include<iostream>
using namespace std;
int main()
{
    int *ptr; // integer pointer declaration  
    int marks[20];// marks array declaratio

    std::cout<<"Enter Element Of An array:"<<std::endl;
    for(int i=0;i<=10;i++)
    {
        cin>>marks[i];
    }
    ptr=marks;// both marks and ptr pointing to the same element..

    std::cout << "The value of *ptr is :" <<*ptr<< std::endl;  
    std::cout << "The value of *marks is :" <<*marks<<std::endl;  
}
/*OUTPUT:
Enter Element Of An array:
1
2
3
4
5
6
7
45
34
2
1
The value of *ptr is :1
The value of *marks is :1
*/