//https://practice.geeksforgeeks.org/problems/series-gp4646/1#
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
   	int Nth_term(int a, int r, int n){
   	    // Code here
   	    long long p = pow(r,n-1);
   	    long long gp = a * p;
   	    return gp;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, r, n;
		cin >> a >> r >> n;
		Solution ob;
		int ans = ob.Nth_term(a, r, n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends