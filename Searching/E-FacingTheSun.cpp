//https://practice.geeksforgeeks.org/problems/facing-the-sun2126/1#
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int countBuildings(int h[], int n) {
	    // code here
	    int ans = 1;
	    int max = h[0];
	    for(int i=1;i<n;i++){
	       bool canSee = (h[i]>max)?true:false;
	       if(canSee){
	           ans++;
	           max = h[i];
	       }
	    }
	    return ans;
	}   
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        Solution ob;
        auto ans = ob.countBuildings(h, n);
        cout << ans << "\n";
    }
    return 0;
}