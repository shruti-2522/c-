#include<iostream>
using namespace std;
int main()
{
    int i=1;
    do{
        int j=1;
   do{
    cout<<i<<" "<<j<<endl;
    j++;
}while(j<=3);
i++;
    }while(i<=3);
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