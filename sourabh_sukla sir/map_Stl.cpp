//MAP class in stl
//map is basically used to replicate assosiative array 
//jo array ham padhte hai unhe ham bolte hai numaric array 
/*Numaric array ->due to indexing number is integer value thats by it is called numaric array 

int a[7];
float n[4];
string s[8];*/

/*associative array ->array ki indexing ham kuch bhi rakh sakte hai ||ham chahe to integer rakh sakte hai chahe to float chate to string chahe to char etc which is called key ;
key  ->     |aman|rahul|devendra|divyansh|
value ->    | 34 | 56  |   76   |   78   |
maps contain sorted key - value pair , in which each key is unique and cannot be changed ,and it can be inserted or deleted but cannot be altered
basically key means indexing ko me change ni kar sakte but usme rakhi values ko i can change 
or me chahu to ak new pair create karke basically key or value ka map me insert kar sakte hu or use delete bhi kar sakte hu 
value associated with key cannot be alte

Customar number   |    customar name
100               |    Gajendra
132               |    Rahul
345               |    Mohan
874               |    chaman

creat Associative array or map 
*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
 map<int , string >customer;//map ka obj hai 
 customer[100]="devendra";
 customer[123]="raman";
 customer[134]="chaman";
 customer[153]="haman";
 customer[167]="gaman";
  
customer.insert(pair<int,string>(1000,"aman"));
 
 //clear fun
 customer.clear();
 // now map ka obj banaye or ushi samah=y value assign kar de 

 //this is the wayu how to excess the map values 
 map<int , string>c{ {100,"gagendra"},{111,"vigendra"},{121,"mahendra"},{131,"gajendra"},{141,"kamlendra"} };
  // useful funtion of map class 
  /* 
  *at()
  *[]
  *size()
  *empty()
  *insert()
  *clear()
  */
 //traversing in map 
 cout<<c[100]<<endl;
 map<int,string>::iterator p=c.begin();
 while(p!=c.end())
 {
    cout<<p->second<<" ";
    p++;
 }cout<<endl<<endl<<endl;
 map<int,string>::iterator p1=customer.begin();
 while(p1!=customer.end())
 {
    cout<<p1->first<<" ";
    cout<<p1->second<<endl;
    p1++;
 }

 //at function 
 cout<<customer.at(100)<<endl;

 //empty fun
 cout<<customer.empty()<<endl;

 //size fun
 cout<<customer.size()<<endl;

 //insert pairs
 
 customer.insert(pair<int,string>(1001,"chman"));
}