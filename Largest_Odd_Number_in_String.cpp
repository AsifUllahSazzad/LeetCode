//LeetCode: 1903. Largest Odd Number in String
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n)
Space Complexity; O(1)
*/

string largestOddNumber(string num)
{
    int i = num.size()-1;

    while(i>=0)
    {
        if(num[i]%2==1)
        {
            break;
        }
        i--;
    }
    
    return num.substr(0,i+1);
}

int main()
{
    string num = "11740";

    string res = largestOddNumber(num);

    //print:
    cout<<res<<endl;    //117

    return 0;
}