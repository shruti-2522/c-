//CPP:SECOND DIFFRENCE OF STRUCTURE WITH C
#include<iostream>
using namespace std;
#include<conio.h>

struct book
{
    int bid;
    char bname[20];
    float bprice;
    void input()
    {
        cout<<"Enter Book id,Book Name and Book Price:";
        cin>>bid>>bname>>bprice;

    }

    void display()
    {
        cout<<"\n"<<"Book Id="<<bid<<" "<<"Book Name="<<bname<<" "<<"Book Price="<<" "<<bprice;
    }

};

int main()
{
    book b1;
    b1.input();
    b1.display();
    getch();

}

/*OUTPUT:
Enter Book id,Book Name and Book Price:1
CPP
9900

Book Id=1 Book Name=CPP Book Price= 9900
*/