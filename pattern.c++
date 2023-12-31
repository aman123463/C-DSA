#include <iostream>
using namespace std;

int main()
{
  /*int n;
  cout << "enter the number :" << endl;
  cin >> n;
  cout << endl;*/
  for (int row = 5; row >= 1; row--)
  {
    for (int col = 1; col <= 5 - row; col++)
    {
      cout << "   ";
    }
    for (int col = 1; col <= 2 * row - 1; col++)
    {
      cout << " * ";
    }
    cout << endl;
  }
  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= 5 - row; col++)
    {
      cout << " ";
    }
    for (int col = 1; col <= row; col++)
    {
      cout << col;
    }
    for (int col = row - 1; col >= 1; col--)
    {
      cout << col;
    }
    cout << endl;
    return 0;
  }
}