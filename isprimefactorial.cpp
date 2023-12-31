#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int factorial(int n=5)//dafault perameter function 
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int n;
    cout << "how many number you went to kow prime " << endl;
    cin >> n;
    int arr[n], a, b;
    cout << "enter which number you went to know about wheather it is prime or not :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        a = isprime(arr[i]);
        if (a == 1)
        {
            cout << "the given number is prime" << endl;
        }
        else
        {
            cout << "the given number  is noot a prime number :" << endl;
        }
    }
    int num;
    for (int i = 0; i < n; i++)
    {
        cout << "enter which number you went to know the factorial :";
        cin >> num;
        b = factorial(num);
        cout << "the factorial of the given number is :" << b << endl;
        cout<<endl;
        cout<<endl;
    }
    return 0;
}