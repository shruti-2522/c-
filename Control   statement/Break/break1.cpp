#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            if(i==2 && j==2)
            {
            break;
            }//end if
            cout<<i<<" "<<j<<endl;
        }//end  for(int j=1;j<=3;j++)
    }//end   for(i=1;i<=3;i++)
}
/*OUTPUT:
1 1
1 2
1 3
2 1
3 1
3 2
3 3
*/