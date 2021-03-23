//SWITCH :
#include<iostream>
using namespace std;
int main()
{
 int num;

 cout<<"Enter Any Number:";
 cin>>num;

 switch(num)
 {
     case 10:
      cout<<"It Is 10";
      break;

      case 20:
      cout<<"It is 20";
      break;

      case 30:
      cout<<"It is 30";
      break;

      default:
      cout<<"Not 10 20 30";
      break;
 }

}
/*OUTPUT:
Enter Any Number:45
Not 10 20 30
*/