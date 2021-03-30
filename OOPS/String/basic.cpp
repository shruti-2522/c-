#include<iostream>
using namespace std;
int main()
{
    string s1="Hello";
    char ch[25]={'c','+','+'};
    string s2=string(ch);
    cout<<"String 1="<<s1<<endl;
    cout<<"String 2="<<s2;
}

/*OUTPUT:
String 1=Hello
String 2=c++  
*/