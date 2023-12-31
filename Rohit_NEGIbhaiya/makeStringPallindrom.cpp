/*Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.
Note: A palindrome is a word which reads the same backward as forward. Example: "madam".

Example 1:

Input:
S = "abc"
Output: 2
Explanation: 
Add 'b' and 'c' at front of above string to make it
palindrome : "cbabc"
Example 2:

Input:
S = "aacecaaa"
Output: 1
Explanation: Add 'a' at front of above string
to make it palindrome : "aaacecaaa"
Your Task: 
You don't need to read input or print anything. Your task is to complete the function minChar() which takes a string S and returns an integer as output.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= S.length <= 106
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int minChar(string str){
    int n=str.size();
        string rev=str;
        rev+='&';
        reverse(rev.begin(),rev.end());
        str+=rev;
        int size=str.size();
        for(int i=0;i<size;i++)
        {
           cout<< str[i]<<" ";
        }
        vector<int>lps(size,0);
        int pre=0;
        int suff=1;
        while(suff<size)
        {
            if(str[pre]==str[suff])
            {
                lps[suff]=pre+1;
                pre++;
                suff++;
            }
            else
            {
                if(pre==0)
                {
                    lps[suff]=0;
                    suff++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }
        cout<<endl;
        for(int i=0;i<size;i++)
        {
           cout<< lps[i]<<" ";
        }
        cout<<" starting point se ham kitan bada palindram bna sakte hai :";
        return n-lps[size-1];
    }
    int main()
    {
        string str="naman";
        cout<<"{";
        for(int i=0;i<str.size();i++)
        {
            cout<<str[i]<<" ";
        }cout<<endl;
        int ans=minChar(str);
        string res;
        int j=str.size()-1;
            for(int i=0;i<ans;i++)
            {
             res+=str[j];
             j--;
            }
             res+=str;
            cout<<endl<<"conversion of given string into pallindrom for is ->"<<res<<" } "<<endl;

        return 0;
    }