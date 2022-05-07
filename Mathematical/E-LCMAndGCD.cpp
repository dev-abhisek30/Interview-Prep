//https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long gcd(long long A, long long B) 
	{ 
	    // code here
	    if(A==0){
	       return B;
	    }
	      
	    return gcd(B%A,A);
	} 
	long long lcm(long long A,long long B){
	    long long m = max(A, B);
	    for(long long i=m;i<=(A*B);i++){
	        if((i%A==0)&&(i%B==0)){
	           return i;
	        }
	    }
	}
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> ans;
        long long g = gcd(A,B);
        long long l = (A*B)/g;
        ans.push_back(l);
        ans.push_back(g);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends