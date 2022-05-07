//https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int bSearch(int arr[],int l,int r,int x){
	    while(l<=r){
            //cout<<l<<"-l"<<endl;
            //cout<<r<<"-r"<<endl;
	       int mid = (l+r)/2;
           //cout<<mid<<"-mid"<<endl;
	       if(arr[mid]==x && arr[mid-1]<x){
	           return mid;
	       }else if(arr[mid]>=x){
	           r = mid-1;
               //cout<<r<<"-r"<<endl;
	       }else{
	           l = mid+1;
               //cout<<l<<"-l"<<endl;
	       }
	    }
	    return -1;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int index = bSearch(arr,0,n-1,x);
        //cout<<index<<"-"<<endl;
	    if(index==-1){
	        return 0;
	    }else{
	        int i=index;
	        int count = 0;
	        while(i<n && arr[i]==x){
	            count++;
                i++;
	        }
	        return count;
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends