#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char key[25];
    char buffer[40];

    cout<<"Enter string key:"<<endl;
    cin.getline(key,25);

    cout<<"Enter Buffer key:";
    cin.getline(buffer,25);

    strcat(buffer,key);

    cout<<"String buffer="<<buffer<<endl;
    cout<<"String key="<<key<<endl;
   

}

/*OUTPUT:
Enter Buffer key:Amrutkar
String buffer=Amrutkarshruti
String key=shruti
*/