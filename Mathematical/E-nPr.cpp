//https://practice.geeksforgeeks.org/problems/npr4253/1
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long factorial(int n){
        if(n<=1){
            return 1;
        }
        return n*factorial(n-1);
    }
    long long nPr(int n, int r){
        // code here
        return factorial(n)/factorial(n-r);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends