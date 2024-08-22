//LeetCode: 541. Reverse String II
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n)
Space Complexity: O(1)
*/

string reverseString(string s, int k, int n)
{
    string ans = "";
    if(k>n){
        reverse(s.begin(),s.end());
        return s;
    }

    
    for(int i=0;i<n;i+=2*k)
    {
        int start = i;
        int end = min(n,start+k);

        //swap:
        int temp=s[i];
        s[i] = s[start];
        s[start] = temp;
    }

    return s;


}

int main()
{
    string s = "abcdefg";
    int k = 3;
    int n = s.size();

    string res = reverseString(s,k,n);  //cbadefg

    //Print:
    cout<<res<<endl;

    return 0;
}