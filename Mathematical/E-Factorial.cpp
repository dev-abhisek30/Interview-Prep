// https://practice.geeksforgeeks.org/problems/factorial5739/1

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C

class Solution
{
public:
    long long int factorial(int N)
    {
        // code here
        if (N <= 0)
        {
            return 1;
        }
        if (N == 1)
        {
            return 1;
        }

        return N * factorial(N - 1);
    }
};
// { Driver Code Starts.

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0;
} // } Driver Code Ends