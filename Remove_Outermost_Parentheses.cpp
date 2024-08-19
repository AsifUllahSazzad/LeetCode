/*
LeetCode: 1021. Remove Outermost Parentheses
*/
#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    int n = s.size();

    string result = "";
    int count=0;
    for(int i=0;i<s.length();i++) {
            if(s[i] == '(')
                count++;
            else if(s[i] == ')')
                count--;
           
            //the only brackets we have to ignore are when count is 0 ')' or count is 1 and bracket is'("
            if((count==1 && s[i] == '(') || (count == 0 && s[i]==')'))
                continue;
            else {
                result.push_back(s[i]);
            }
        }
    return result;
}

int main()
{
    string s = "(()())(())";

    string res = removeOuterParentheses(s);
    
    //Print:
    cout<<res<<endl;    //()()()
    return 0;
}