#include<iostream>
using namespace std;

int main()
{

    int arr[4];
    /*cout<<"enter array value "<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>arr[i];
    } 
    for(int j=1;j<5;j++)
    {
    cout<<"the value is :"<<arr[j]<<" ";
    }*/
    int totalsize=sizeof(arr)/sizeof(int);
    cout<<endl;
    cout<<"the total elements of an array is :-"<<totalsize<<endl;
    cout<<endl;

    /*cout<<sizeof(arr);*/
    return 0;
}


    
     /*cout<<"enter the array value :"<<endl;
     cin>>arr[0];
     cin>>arr[2];
     cout<<"the value of index secound is "<<arr[2]<<endl;
     cout<<"the value of index first is "<<arr[1]<<endl;
     return 0;*




    /*={1,5,3,6,4,};
    {
        cout<<arr<<endl;
        cout<<arr+1<<endl; 
        cout<<arr+2<<endl; 
        cout<<arr+3<<endl;
        return 0;
    }
}
/*int fibonacchi(int n);
{
    int first=0;
    int secound=1;
    cout<<first<<" "<<secound<<" ";
    int count=1;
    for(int i=1;i<=5;i++)
    {
     secound=count;
     first=secound;
     count=first+secound;
       cout<<count<<" ";
    }
    return count;
}
/*bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:-"<<endl;
    cin>>n;
    cout<<endl;
    if(isprime(n))
    {
        cout<<"the given number is  a prime number :- "<<endl;
    }
    else
    {
        cout<<"the given number is not a prime number :-"<<endl;
    }
    return 0;
}
/*int print(int num)
{
    cout<<"the value of n is:-"<<n<<endl;
}
int main()
{
 int n=5;
 print(n);
 return 0;
}
/*int factorial(int b)
{
    int fact=1;
    for(int i=1;i<=b;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    return num/denom;

}
int main()
{
    int a,b,ans;
    cout<<"enter the value of a,b:-"<<endl;
    cin>>a>>b;
    cout<<endl;
    ans=nCr(a,b);
    cout<<"the factorial of :"<<a<<"and :"<<b<<"is:-"<<ans<<endl;
    return 0;*/
//}
/*bool iseven(int b)
{
 if(b &1)
 {
   return 0;
 }
 else{
    return 1;
 }

}
int main()
{
    int a;
    cout<<"enter the value of a:-"<<endl;
    cin>>a;
    cout<<endl;
     if (iseven(a))
    {
        cout<<"the given number is even"<<endl;

    }
    else
    {
        cout<<"the number is odd:-"<<endl;
    }
   // if(6&1) cout<<"JJJ"<<endl;
    // cout<<10&1<<endl;
    /*int num ,n;
    cout<<"enter the value of num and n :-"<<endl;
    cin>>num;
    cout<<endl;
    cin>>n;
    switch(num)
    {
        case1:
        {
            cout<<"first"<<endl;
            break;
        }
        case2: switch(n)
              {
                case 3;
                {
                    cout<<"the value of num is :-"<<num<endl;
                    break;
                }
             }
              
        {
            cout<<"secound"<<endl;
            break;
        }
        default:
        {
            cout<<"it is a default case:-"<<endl;
        }
    }*/
    /*int j=3;
    for(int k=0;k<=j;k++)
    {
    int a,b;
    cout<<"enter the value of a and b:-"<<endl;
    cin>>a>>b;
    cout<<endl;
    int ans=1;
    for(int i=1; i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<"the result of a power b is :-"<<ans<<endl;
    }*/
    
