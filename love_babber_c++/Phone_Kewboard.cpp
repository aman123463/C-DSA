/*Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

KEYWOARD BUTTONS     1." "      2."abc"      3."def"
                     4"ghi"     5."jkl"      6."mno"
                     7."pqrs"   8."tuv"      9."wxyz"
                                0." "

 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
 */
class Solution {
public:
    void solve(string digits,vector<string>&ans,string output,int index,string mapping[])
    {
        //base case
        if(index>=digits.length())
        {
            ans.push_back(output);
            return ;
        }
        int element=digits[index]-'0';
        string value=mapping[element];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,ans,output,index+1,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
      vector<string>ans;
      if(digits.size()==0)
      {
          return ans;
      }
      string output;
      int index=0;
      string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
      solve(digits,ans,output,index,mapping);
      return ans;
    }
};
