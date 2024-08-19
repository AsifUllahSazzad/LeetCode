//LeetCode: 151. Reverse Words in a String
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s, int n)
{
    reverse(s.begin(),s.end());

    int start = 0;
    int end = 0;

    int i = 0;

    while(i<n)
    {
        while(s[i]==' ' && i<n)
        {
            i++;
        }

        if(i==n) break; // to stop index going out of bounds

        while(s[i] !=' ' && i<n)
        {
            s[end++] = s[i++];
        }
        reverse(s.begin()+start, s.begin()+end);

        s[end++] = ' ';

        start = end;
        i++;
    }
    s.resize(end-2);
    return s;
}

int main()
{
    string s = "   hello world   ";
    int n = s.size();

    string res = reverseWords(s,n);

    // Print:
    cout << res << endl; // world hello

    return 0;
}