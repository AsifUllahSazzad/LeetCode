//557. Reverse Words in a String III
#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution:
Time Complexity: O(n)
Space Complexity: O(1)
*/

string reverseWords(string s, int n)
{
    //Using two pointer method:
    int start = 0;
    int end = 0;

    while(end<n)
    {
        if(s[end] != ' ')   //Find seperate word
        {
            end++;
        }
        else{   //Reverse seperate word
            reverse(s.begin()+start,s.begin()+end);
            start = end+1; //single space reduce
            end++;
        }
    }

    if(start<n) //last word reverse
    {  
        reverse(s.begin()+start, s.end());
    }

    return s;
}

int main()
{
    string s = "Welcome to this world!";
    
    int n = s.size();   //string length


    string str = reverseWords(s, n);

    cout<<str<<endl;    //emocleW ot siht !dlrow

    return 0;
}