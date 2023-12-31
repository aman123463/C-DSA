#include <iostream>
using namespace std;

/*cheak the number is square root or not : */

#include<math.h>
void sqrt(int num)
{
    for(int i=1,a=2;pow(i,a)<=num;i++)
    {
      if(pow(i,a)==num)
      {
        cout<<" the square root of the given number "<<num<<" is :"<<i<<endl;
      }
    }
}
int main()
{
    int num;
    cout<<" enter any random number :"<<endl;
    cin>>num;
    cout<<endl;
    sqrt(num);
    /*int cheak=sqrt(num)
    if(cheak==1)
    {
        cout<<" the given number  is squareroot :"<<endl;
    }
    else
    {
        cout<<" not a square root number :"<<endl;
    }*/
    return 0;
}

/*cheak the given number comes in pow of 2 or not*/
/*bool ispoweroftwo(int num)
{
    if(num<1)
    {
        return 0;
    }
    while(num!=1)
    {

        if(num%2==1)
        {
            return 0;
        }
        num/=2;
    }
    return 1;
}
int main()
{
    int num;
    cout<<" give number :"<<endl;
    cin>>num;
    cout<<endl;
    int cheak=ispoweroftwo(num);
    if(cheak==1)
    cout<<" the given number comes in pow of two"<<endl;
    else
    {
    cout<<" not comes in pow of two:"<<endl;
    }
    return 0;
}*/
 
/*reverse integer 345=543 */
/*int main()
{
    int num;
    cout << " given nay num:" << endl;
    cin >> num;
    cout << "the given number is :" << num << endl;
    cout << endl;
    int rem, ans = 0;
    while (num)
    {

        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }
    if (ans > INT_MAX/10)
    {
        cout << " overflow condition :" << endl;
    }
    else
    {
        cout << "reverse of the number is :" << ans << endl;
    }
    cout << INT_MIN << endl;
    return 0;
}*/
/* leap year program*/
/*bool isleapyear(int year)
{
    if(year%100==0)
    {
        return 1;
    }
    else if(year%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
int year ;
cout<<" enter any year:"<<endl;
cin>>year;
cout<<endl;
int cheak=isleapyear(year);
if(cheak==1)
{
    cout<<"given year is laep year:"<<endl;
}
else
{
  cout<<"given year is not a leap year:"<<endl;
}
return 0;
}*/

/*add digit program:*/

/*
int sumdigit(int num)
{
    int ans = 0;
    int rem;
    while (num > 9)
    {
        while (num)
        {
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }
        num=ans;
    }
    return num;

}
int main()
{
    int num;
    cout << "enter the number :" << endl;
    cin >> num;
    cout << endl;
    int sum = sumdigit(num);
    cout << "the sum of the digit is :" << sum << endl;
    return 0;
}*/