//https://practice.geeksforgeeks.org/problems/closest-number5728/1#
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        int div = N/M;
        int r = N%M;
        int d1 = N - r;
        int d2 = (N>=0)?((div+1)*M):((div-1)*M);
        
        if(N-d1 == d2-N){
            return (abs(d1)>abs(d2))?d1:d2;
        }
        if(N-d1 < d2-N){
            return d1;
        }else{
            return d2;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends