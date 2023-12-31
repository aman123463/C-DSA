#include <iostream>
using namespace std;
struct employee
{
    int eid;
    float salary;
    char favchar[20];
}  h; // aman;//in this place -we can declear a variable of struct employee data type or obj of struct
int main()
{
    struct employee aman={14256,50000.566,"jay_shree_ram"};
    cout << sizeof(aman) << endl;
    /*h.eid = 143567;

    aman.favchar=  'A';
    aman.salary = 100000.675;*/
    cout << "aman eid is " << aman.eid << endl;
    cout << "aman favname is " << aman.favchar << endl;
    cout << "aman salary is " << aman.salary << endl;
    return 0;
}