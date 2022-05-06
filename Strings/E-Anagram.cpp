//https://practice.geeksforgeeks.org/problems/anagram-1587115620/1#
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        // Your code here
        map<char,int> mp;
        map<char,int> mp1;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        
        for(int i=0;i<b.size();i++){
            mp1[b[i]]++;
        }
        
        if(mp==mp1){
            return true;
        }else{
            return false;
        }
    }

};


int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}