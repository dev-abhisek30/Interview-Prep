//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1#
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char,int> mp;
	    for(int i=0;i<n;i++){
	       mp[nuts[i]]++;
	       mp[bolts[i]]++;
	    }
	    string s = "!#$%&*@^~";
	    int j=0;
	    for(int i=0;s[i]!='\0';i++){
	        auto itr = mp.find(s[i]);
	       if(itr!=mp.end()){
	           nuts[j] = s[i];
	           bolts[j] = s[i];
	           j++;
	       }
	    }
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends