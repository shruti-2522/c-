#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char key[25],buffer[25];

    cout<<"Enter Key:"<<endl;
    cin.getline(key,25);

    cout<<"Enter Buffer:"<<endl;
    cin.getline(buffer,25);

    strcpy(key,buffer);
    cout << "Key = "<< key << endl;  
    cout << "Buffer = "<< buffer<<endl;  
}

/*OUTPUT:

Enter Key:
shruti
Enter Buffer:
Pratik
Key = Pratik
Buffer = Pratik
*/