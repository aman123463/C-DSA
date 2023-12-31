 #include<iostream>
 #include<vector>
 using namespace std;

 int longestPalindrome(string s)
    {
     vector<int>lower_case(26,0),upper_case(26,0);
     int count=0;
     int odd=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]>='a')
         {
          lower_case[s[i]-'a']++;
         }
         else
         {
             upper_case[s[i]-'A']++;
         }
     }   
     for(int i=0;i<26;i++)
     {
         if(lower_case[i]%2==0)
         {
             count+=lower_case[i];
         }
         else
         {
             count+=lower_case[i]-1;
             odd=1;
         }
         if(upper_case[i]%2==0)
         {
             count+=upper_case[i];
         }
         else
         {
             count+=upper_case[i]-1;
             odd=1;
         }
     }
     return odd+count;
        
    }
    int main()
    {
        string s="abccccdd";
        int count=longestPalindrome(s);
        cout<<" the length of the longest pallindrom is :"<<count<<endl;
        return 0;
    }