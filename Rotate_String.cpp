//LeetCode: 796. Rotate String
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n)
Space Complexity: O(1)
*/

bool rotateString(string s, string goal)
{
    int n = s.size(), m = goal.size();

    if(n!=m) return false;

    for(int i=0;i<n;i++)
    {
        string temp = s+s;

        if(temp.find(goal) != string::npos)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s = "abcde";
    string goal = "cdeab";

    bool res = rotateString(s,goal);  

    //print:
    cout<<res<<endl;   //true

    return 0;
}