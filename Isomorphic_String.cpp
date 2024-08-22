//LeetCode: 205. Isomorphic Strings
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n)
Space Complexity: O(n)
*/

bool isIsomorphic(string s, string t)
{
    int n = s.size(), m=t.size();

    if(n != m) return false;

    unordered_map<char,char>m1,m2;
    for(int i=0;i<n;i++)
    {
        char original = s[i];
        char replacement = t[i];

        if(m1.find(original) != m1.end())
        {
            if(replacement != m1[original])
            {
                return false;
            }
        }
        if(m2.find(replacement) != m2.end())
        {
            if(original != m2[replacement])
            {
                return false;
            }
        }

        m1[original] = replacement;
        m2[replacement] = original;
    }

    return true;
}

int main()
{
    string s = "paper";
    string t = "title";

    bool res = isIsomorphic(s,t);

    //print:
    cout<<res<<endl;    //true

    return 0;
}