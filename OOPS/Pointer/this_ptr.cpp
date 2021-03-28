#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    float salary;

    Employee(int id,string name,float salary)
    {
        this ->id=id;
        this ->name=name;
        this ->salary=salary;
    };

    void display()
    {
        cout<<"Employee Id="<<id<<endl<<"Employee Name="<<name<<endl<<"Employee salary="<<salary<<endl;
    }


};

int main()
{
   Employee e1 =Employee(101, "Shruti", 890000); //creating an object of Employee   
    Employee e2=Employee(102, "Niki", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}

/*OUTPUT:
Employee Id=101
Employee Name=Shruti
Employee salary=890000
Employee Id=102
Employee Name=Niki
Employee salary=59000
*/