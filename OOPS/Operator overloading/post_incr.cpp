
// postfix increment operator overloading
 
#include <iostream>
using namespace std;
 
class Integer {
private:
    int i;
 
public:
    // Parameterised constructor
    Integer(int i = 0)
    {
        this->i = i;
    }
 
    // Overloading the postfix operator
    Integer operator++(int)
    {
        Integer temp;
        temp.i = i++;
        return temp;
    }
 
    // Function to display the value of i
    void display()
    {
        cout << "i = " << i << endl;
    }
};
 
int main()
{
    Integer i1(3);
 
    cout << "Before increment: ";
    i1.display();
 
    // Using the post-increment operator
    Integer i2 = i1++;
 
    cout << "After post increment: ";
    i2.display();
}


/*OUTPUT:
Before increment: i = 3
After post increment: i = 3
*/