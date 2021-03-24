#include<iostream>
using namespace std;
int main()
{
 int i;
 for(i=1;i<=10;i++)
 {
     if(i==5)
         {
             continue;
         }//end if
         cout<<i<<endl;
     }//end for
}//end main

/*OUTPUTl
1
2
3
4
6
7
8
9
10*/