#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Eating..."<<endl;
    }
};

class Dog:public Animal
{
    public:
    void eat()
    {
      cout<<"Eating Bread...";
    }
};

int main(void)
{
    Dog d=new Dog();
    d1.eat();
}
/*OUTPUT:
Eating Bread...
*/