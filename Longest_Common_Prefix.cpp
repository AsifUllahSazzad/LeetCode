//LeetCode: 14. Longest Common Prefix
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(nlogn)
Space Complexity: O(1)
*/

string longestCommonPrefix(vector<string>str)
{
    int n = str.size();

    sort(str.begin(),str.end());

    string first = str[0];
    string last = str[n-1];

    string ans = "";
    for(int i=0;i<min(first.size(),last.size());i++)
    {
        if(first[i] != last[i])
        {
            return ans;
        }
        ans += first[i];
    }

    return "";
}

int main()
{
    vector<string> str = {"flower","flow","flight"};

    string res = longestCommonPrefix(str);

    //Print:
    cout<<res<<endl;    //fl

    return 0;
}