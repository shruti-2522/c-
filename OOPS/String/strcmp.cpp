#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char key[]="Hello";
    char buffer[50];

    do
    {
        cout<<"Enter any string:";
        cin>>buffer;
    } while (strcmp(buffer,key)!=0);
    cout<<"String is valid";
    
}

/*OUTPUT:
Enter any string:shruti
Enter any string:shruti
Enter any string:shruti
Enter any string:shruti
Enter any string:Hello
String is valid*/