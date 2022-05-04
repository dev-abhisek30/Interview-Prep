//https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1#
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findFloor(vector<long long> arr, long long N, long long K){
        
        // Your code here
        int l = 0;
        int r = N-1;
        int ans = -1;
        //cout<<arr[N]<<endl;
        while(l<=r){
            int mid = (l+r)/2;
            if((arr[mid]<=K)&&((arr[mid+1]>K)||(mid+1==N))){
                return mid;
            }else if(arr[mid]>K){
                r = mid -1;
            }else{
                l = mid +1;
            }
        }
        return ans;
    }
};

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}