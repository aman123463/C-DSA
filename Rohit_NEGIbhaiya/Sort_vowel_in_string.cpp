/*Given a 0-indexed string s, permute s to get a new string t such that:

All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
Return the resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.

 

Example 1:

Input: s = "lEetcOde"
Output: "lEOtcede"
Explanation: 'E', 'O', and 'e' are the vowels in s; 'l', 't', 'c', and 'd' are all consonants. The vowels are sorted according to their ASCII values, and the consonants remain in the same places.
*/
class Solution {
public:
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
        for(int i=0;i<26;i++)
        {
            char ch='A'+i;
            while(upper[i])
            {
                ans+=ch;
                upper[i]--;
            }
        }
        for(int i=0;i<26;i++)
        {
            char ch='a'+i;
            while(lower[i])
            {
                ans+=ch;
                lower[i]--;
            }
        }
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
};
