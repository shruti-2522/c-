#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout<<"Eating...."<<endl;
    }
};

class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"Barking...."<<endl;
    }
};

class BabyDog:public Dog
{
    public:
    void bark1()
    {
        cout<<"Babydog is barking";
    }
};

int main()
{
    BabyDog b1;
    b1.eat();
    b1.bark();
    b1.bark1();
}

/*OUTPUT:
Eating....
Barking....
Babydog is barking
*/