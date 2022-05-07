// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int binarysearch(long long int x, long long int l,long long int r) {
        long long int ans=-1;
        while(l<=r){
            long long int mid = l + (r - l)/2;
            long long int t= mid*mid;
            cout<<l<<","<<r<<","<<mid<<","<<t<<endl;
            if(t <= x){
                if(t==x)
                    return mid;
                else{
                    if(ans<mid){
                        ans = mid;
                    }
                    l = mid + 1;
                }
            }else if(t>x){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        return binarysearch(x,1,x);
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends