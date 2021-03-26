#include<iostream>
using namespace std;
#include<conio.h>

class Employee
{
    public:
    int id;
    string name;
    float salary;
    
    void emp_data(int i,string s,float f)
    {
     id=i;
     name=s;
     salary=f;
    }

    void show_empdata()
    {
        cout<<"Employee Id="<<id<<" "<<endl<<"Employee Name="<<name<<endl<<"Employee Salary="<<salary<<endl;
    }

};

int main()
{
    Employee e1,e2;
    e1.emp_data(1,"Shruti Amrutkar",75000);
    e2.emp_data(2,"Shradda Karpe",75000);
    e1.show_empdata();
    e2.show_empdata();

}

/*OUTPUT:
Employee Id=1 
Employee Name=Shruti Amrutkar
Employee Salary=75000
Employee Id=2
Employee Name=Shradda Karpe
Employee Salary=75000
*/