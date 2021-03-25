//FUNCTION RETURNING SSTRUCTURE
#include<iostream>
using namespace std;
#include<conio.h>

//Global declearation:
struct book{
    int book_id;
    char book_name[20];
    float book_price;
};

void display(book);
book input();
int  main()
{
 book b1;
 b1=input();
 display(b1);
 getch();
}

void display(book b)
{
    cout<<"Book Id="<<b.book_id<<"Book Name="<<" "<<b.book_name<<" "<<"Book Price="<<b.book_price;
}

book input()
{
    book b;
    cout<<"Enter Book id,Book Name And Book Price:";
    cin>>b.book_id>>b.book_name>>b.book_price;
    return b;
}

/*OUTPUT:
Enter Book id,Book Name And Book Price:1
Cpp
345.0
Book Id=1Book Name= Cpp Book Price=345
*/