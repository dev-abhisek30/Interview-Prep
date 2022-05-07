//https://practice.geeksforgeeks.org/problems/reverse-digit0316/1
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long ans=0;
		    int digits = (int) log10(n);
		    while(n!=0){
		        ans = ans + ((n%10)*(pow(10,digits)));
		        n = n/10;
		        digits--;
		    }
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends