#include <iostream>
#include <stack>
using namespace std;
bool cheakRedundent(string &str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)//by the help of loop we will take each character one by one 
    {
        char ch = str[i];
        if (ch == '(' || ch == '*' || ch == '+' || ch == '/' || ch == '-')//if this char exist in our expression then we will insert these value in stack 
        {
            s.push(ch);
        }
        else
        {
            // ab hamare expression me ya to ')' hai ya to lower case
            if (ch == ')')
            {
                bool isredundent = true;

                while (s.top() != '(')//when the compiler is not entered in this loop it means given ex is redundent 
                {
                    char top = s.top();
                    if (top == '*' || top == '+' || top == '-' || top == '/')
                    {
                        isredundent = false;//when the compiler will reach in this case means not a retundent 
                    }

                    s.pop();
                }
                if (isredundent == true)//if this condition is true means ->given expression is  retundent otherwise false 
                {
                    return true;
                }
                s.pop();
            }
        }
    }
    return false;
}
int main()
{
    string str = "(a+b*(d/b)+a*n(h*j))";
    bool ans = cheakRedundent(str);
    if (ans == true)
    {
        cout << " given expresion is redundent:" << endl;
    }
    else
    {
        cout << " given expression is not redundent :" << endl;
    }
    return 0;
}