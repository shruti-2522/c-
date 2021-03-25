//PRINT ARRAY ELEMENTS USING FOR EACH LOOP
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,30,40,50,60};
    //Traversing Array:
    for(int i:arr)
    {
        cout<<i<<endl;
    }
}

/*OUTPUT:
10
30
40
50
60
*/