//https://practice.geeksforgeeks.org/problems/sort-the-string-in-descending-order3542/1#
#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}


string ReverseSort(string str){
    //complete the function here
    map<char,int> mp;
    string s=str;
    int l = str.size()-1;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        //cout<<itr->first<<","<<itr->second<<endl;
        int j = itr->second;
        //cout<<itr->first<<endl;
        while(j>0){
            s[l] = itr->first;
            //cout<<l<<"-"<<j<<endl;
            l--;
            j--;
        }
    }
    return s;
}