/*
/structure is collection of dissimilar data type
/structure is a way to declear group of variables
/structure is used to creat our own data type
we can't axcess directly the member of structure 
variable . varibable name ka use kar sakte hai 
*/
#include<iostream>
#include <cstring>
using namespace std;
struct book//global defination of structure->is struct ko aap kahi se bhi axcess kar sakte hai  
{
    int bookid;
    char title[20];
    float price;
    int pages;
}b3;//aise bhi declear kar sakte hai 
book b2;//global declaration of variable 
book input()
{
    book var;
cout<<"enter details -1.bookid 2.tittle 3.price 4.pages "<<endl;
cin>>var.bookid>>var.title>>var.price>>var.pages;
return (var);
}
void display(book& b2)
{
    cout<<b2.title<<" "<<b2.bookid<<" "<<b2.pages<<endl;
}
int main()
{
//struct is optional in cpp->hare struct is a new data type and variable name is var ,and book_is title pages are its data member 
 struct book var={12324,"this ia a book",980};
 b2.price=87.90;
 //b2.title=" bpp";//title address me change ho jayega 
 strcpy(b2.title," cpp made easy ");
 b3=b2;//b2 ka sara data b3 me transfer  
 cout<<var.price<<endl;
 cout<<b2.price<<endl;
 cout<<b3.title<<endl;
 //user se data kese le 
/* cout<<"enter details -1.bookid 2.tittle 3.price 4.pages :"<<endl;
 cin>>var.bookid>>var.title>>var.price>>var.pages;*/
 //function returning structure 
b2=input();//take input from the user using function 
display(b2);
}