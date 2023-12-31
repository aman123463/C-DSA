#include<iostream>
#include<vector>
using namespace std;
/*steps to solving this question 
1. select the vowels in the given string 
2. sort the vowels in the according to upper and lower case 
3.insert the vowel at the right possition 
*/
string sortVowels(string s) {
        string ans;
        vector<int>upper(26,0);
        vector<int>lower(26,0);
        for(int i=0;i<s.size();i++)
        {
            //upper vowel insert
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }
            //lower vowel insert
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }
        //inserty upper vowel element insrt in ans string
        for(int i=0;i<26;i++)
        {
            char ch='A'+i;
            while(upper[i])
            {
                ans+=ch;
                upper[i]--;
            }
        }
        // //inserty lower vowel element inser in  ans string
        for(int i=0;i<26;i++)
        {
            char ch='a'+i;
            while(lower[i])
            {
                ans+=ch;
                lower[i]--;
            }
        }
       /* l##tc#d#
        sTrv for string traversiol

        "EOee"
        ansTrv for ans string traversal*/
        int sTrv=0;
        int ansTrv=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[sTrv]=='#')
            {
                s[sTrv]=ans[ansTrv];
                ansTrv++;
            }
            sTrv++;
        }
        return s;
}
int main()
{
    string str="lEetcOde";

    string ans=sortVowels( str);
    cout<<"[***  sort vowel in a string"<<endl<<"old input is-> "<<str<<endl<<"resultent output is ->  " <<ans<<"  ***]"<<endl;
    return 0;
}