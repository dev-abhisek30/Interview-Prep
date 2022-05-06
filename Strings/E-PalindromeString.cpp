//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int size = S.size();
	    int j = size;
	    for(int i=0;i<(size/2);i++){
	       if(S[i] == S[j-1]){
	           
	       }else{
	           return 0;
	       }
	       j--;
	    }
	    return 1;
	}

};


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}