// https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1
//  { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long SieveOfEratosthenes(long long n)
    {
        bool prime[n + 1];
        long long ans  =0;
        memset(prime, true, sizeof(prime));

        for (long long p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        // Print all prime numbers
        for (long long p = 2; p <= n; p++)
            if(prime[p] && (n%p ==0)){
                ans = p;
            }
        return ans;
    }
    long long int largestPrimeFactor(int N)
    {
        // code here
        return SieveOfEratosthenes(N);
    }
};

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
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
} // } Driver Code Ends