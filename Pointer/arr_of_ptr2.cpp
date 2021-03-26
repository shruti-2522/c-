#include<iostream>
using namespace std;
int main()
{
    int ptr[5];//integer array declearation
    int *ptr1[5];//integer array of ptr declearation

    std::cout<<"Enter Elements of array:"<<std::endl;
    for(int i=0;i<5;i++)
    {
      std::cin>>ptr[i];
    }

    for(int i=0;i<5;i++)
    {
        ptr1[i]=&ptr[i];
    }

    //Printing the values of ptr1 array
      std::cout << "The values are" << std::endl;  
    for(int i=0;i<5;i++)  
    {  
    std::cout << *ptr1[i] << std::endl;  
    }  
}

/*OUTPUT:
Enter Elements of array:
1
2
3
4
4
The values are
1
2
3
4
4
*/