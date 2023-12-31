#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value of n :" << endl;
  cin >> n;
  cout << endl;
  /*int i=1;
  while(i<=n)
  {
    int j=1;
    int value=i;
    while(j<=n)
    {
      cout<<value<<" ";
      value--;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
int i=1;
  while(i<=n)
  {
    int j=1;
    //int value=i;
    while(j<=n)
    {
      cout<<i*j<<" ";
      //value--;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    char ch = 'A' + i - 1;
    while (j <= n)
    {
      cout <<ch;
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}*/
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    char start = 'A'+i+j+2;
    
    while (j <= n)
    {
      cout << start;

      start++;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
