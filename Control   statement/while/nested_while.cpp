#include<iostream>
using namespace std;
int main()
{
 int i=1;
 while(i<=3)
 {
     int j=1;
     while(j<=3)
     {
 
         cout<<i<<" "<<j<<endl;
         j++;
     }
     i++;
 }
}
/*OUTPUT:
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3
*/