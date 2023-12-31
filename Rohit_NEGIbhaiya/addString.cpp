/*Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"

Example 2:
Input: num1 = "456", num2 = "77"
Output: "533"

Example 3:
Input: num1 = "0", num2 = "0"
Output: "0"
 

Constraints:

1 <= num1.length, num2.length <= 104
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.
*/

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string num1 = "1238";
    string num2 = "134";
    string ans;
    int index1 = num1.size() - 1;
    int index2 = num2.size() - 1;
    int carry = 0;
    int sum = 0;
    while (index1 >= 0 && index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        ans += '0' + (sum % 10);
        index1--;
        index2--;
    }
    while (index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        ans += '0' + (sum % 10);
        index1--;
        index2--;
    }
    while (index2 >= 0)
    {
        sum = (num2[index2] - '0') + carry;
        carry = sum / 10;
        ans += '0' + (sum % 10);
        index1--;
        index2--;
    }
    if (carry)
    {
        ans += '1';
    }

     reverse(ans.begin(),ans.end());
    /*int i = 0, j = ans.size() - 1;
    while (i < j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }*/
    cout << ans << endl;
    return 0;
}