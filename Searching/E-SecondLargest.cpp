//https://practice.geeksforgeeks.org/problems/second-largest3735/1#
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = INT_MIN;
	    int secondLargest = INT_MIN;
	    for(int i=0;i<n;i++){
	       if(largest<arr[i]){
	           secondLargest = largest;
	           largest = arr[i];
	       }
	       if((arr[i]<largest) && (arr[i]>secondLargest)){
	           secondLargest = arr[i];
	       }
	    }
	    if(secondLargest == INT_MIN){
	        return -1;
	    }
	    return secondLargest;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}