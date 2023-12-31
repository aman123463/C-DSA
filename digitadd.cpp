#include <iostream>
using namespace std;
int main()
{
    int num ,rem;float ans = 0;
    cout << " enter any number" << endl;
    cin >> num;
    for(int i=2;i<=num;i*=2)
    {
        ans=num%i;
        num=num/2;
        if(ans==1)
        {
            cout<<" yes its a perfect square number:"<<endl;
        }

    }
   
}


    /*for (; num!=0;)
    {
        while (num != 1)
        {
            rem = num % 2;
            num = num / 2;
             if (num == 1)
            {
                cout << "the given nuber is a complete sruare:" << endl;
                break;
            }
            break;
        }
    }
    return 0;
}*/

/* if(num%400==0||num%4==0)
 {
     cout<<"the given year is leap year:"<<endl;
 }
 else
 {
   cout<<"not a leap year:"<<endl;
 }
 while(num!=0)
 {
     rem=num%10;
     num/=10;
      if(ans>INT_MAX/10||ans<INT_MIN/10)
     {
         cout<<"we can not store this";
     }
     ans=ans*10+rem;
 }
 cout<<"the ans is :"<<ans<<endl;*/
/*
while (num > 9)
{
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem;
    }
    num = ans;
}
cout << "the ans of your number digit is :--" << num << endl;
return 0;
}*/