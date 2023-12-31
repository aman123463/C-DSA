//number of 1 bits program
 #include<iostream>
using namespace std;
int main()
{
    int pro=1;
    int sum=0;
    int n;
    cout<<"enter the value of n";
    cin>>n;
     while(n!=0)
    {
        int rem=n%10;
        pro=pro*rem;

        sum=sum+rem;
        n=n/10;


    }
    int answer=pro-sum;
    return answer;


}