#include<iostream>
using namespace std;

float division(int x,int y)
{
    if(y==0)
    {
        cout<<"Divide by zero";
    }
    return(x/y);
}

int main()
{
    int i=70;
    int j=0;
    int k=0;
    try
    {
       cout << k << endl;  
   }catch (const char* e) {  
      cerr << e << endl;  
   }  
    
}