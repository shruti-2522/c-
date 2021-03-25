#include<iostream>
using namespace std;

void printarray(int arr[5]);
int main()
{
    int a1[5]={10,20,30,40,50};
    int a2[5]={100,200,300,400,500};
    printarray(a1);
    printarray(a2);
}

void printarray(int arr[5])
{
    cout<<"Printing Elements Of Array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}


/*OUTPUT:
Printing Elements Of Array:
10
20
30
40
50
Printing Elements Of Array:
100
200
300
400
500
*/