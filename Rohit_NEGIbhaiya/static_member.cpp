/*static 
*static local variable
*static member variable  
*static member function
*/
/*they are by default initialize to 0;
static local variable ->their lifetime throughout the program
jo bhi variable ham static kbanate hai use banate samay hi memory mil jati hai but simple variable ke case me esa nahi hai jab ham us fun ko call karenge tab use memory allocate hogi or jyese hi ham fun se bahar ayenge to bo variable destroy ho jayega but iske case me esa ni hot jab hamara program ke sare statement khatam ho jate hai hamane program destroy hota hai tab ye variable destroy ho jata hai
ye static variable sirf ak baar banta hai but simple variable jo jab jab call karegnge ye banega kam khatam hone me memory deallocate hogi fir call karenge fir banega 
*/
#include<iostream>
using namespace std;
void fun()
{
static int x;//they are by-default initioalized to 0;
int y;//but ye garwage value se initialized hai 
}
int main()
{}
//static member variable 
/*
*Decllared inside the class 
*also known as class member variable 
*they must be defined outside the class 

*/
class account
{
    private :
    int balance;
    static float roi;
}