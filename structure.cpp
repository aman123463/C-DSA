//
//is tarike se define karna ye =c and c++ donp ke liye valid he but 
#include<iostream>
using namespace std;
struct book
{
    public:
    float prize;
    char booktitle[10];
    int bookid;
    private:
    int  bookname[20];
     
     public:
     void setdata()
     {
        cout<<"enter the name of book"<<endl;
        cin>>bookname[20];
     }
     void getdata()
     {
        cout<<bookname[20]<<endl;
     }


};
book print();
 void display(book);
int main()
{
//this is a first method to access structure variable 
book b1;
b1.setdata();
b1.getdata();
b1.prize=100.98;
cout<<b1.prize<<endl;
//this is 2nd method to access structure variable :
book b2={100.98,"nameaman ",18929};
cout<<b2.booktitle;
b1=print();
display(b1);

return 0;
}
book print()
{
    book b;
    cout<<"enter the value of book prize ,booktitle and bookid"<<endl;
    cin>>b.prize;
    cin>>b.booktitle;
    cin>>b.bookid;
    cout<<endl;
    return b;
}
void  display(book b)
{
    cout<<b.prize<<" "<<b.booktitle<<" "<<b.bookid<<endl;
}

    
