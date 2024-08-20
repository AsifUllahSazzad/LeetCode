//LeetCode: 8. String to Integer (atoi)
#include <bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n)
Space Complexity: O(1)
*/

int myAtoi(string s)
{
    int n = s.size();
    int i = 0;

    // ignore whitespaces:
    while (s[i] == ' ' && i < n) i++;

    // find the sign:
    int sign = 1;
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(s[i] == '+') i++;

    long long result = 0, digit = 0;
    while (s[i] != ' ' && i < n)
    {
        digit = s[i] - '0';

        // a to z word return result:
        if (digit > 9 || digit < 0)
            return result*sign;

        result = (result * 10) + digit;

        // Overflow condition check:
        if (result > INT_MAX && sign == -1)
            return INT_MIN;
        if (result > INT_MAX && sign == 1)
            return INT_MAX;

        i++;
    }

    return result * sign;
}

int main()
{
    string s = "  -0012a42";

    int res = myAtoi(s);

    // print:
    cout << res << endl;    //-12

    return 0;
}