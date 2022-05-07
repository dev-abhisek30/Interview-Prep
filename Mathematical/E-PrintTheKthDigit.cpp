//https://practice.geeksforgeeks.org/problems/print-the-kth-digit3520/1
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        long long int var = pow(A,B);
        int ans = 0;
        while(K>0){
            ans = var%10;
            var = var/10;
            K--;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends