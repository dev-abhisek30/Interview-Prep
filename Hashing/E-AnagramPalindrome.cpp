//https://practice.geeksforgeeks.org/problems/anagram-palindrome4720/1#
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}


int isPossible (string S)
{
    // your code here
    map<char,int> mp;
    for(int i=0;i<S.size();i++){
        mp[S[i]]++;
    }
    
    int oneCount = 0;
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        if((itr->second%2)==1){
            oneCount++;
        }
    }
    if(oneCount>1){
        return 0;
    }else{
        return 1;
    }
}
