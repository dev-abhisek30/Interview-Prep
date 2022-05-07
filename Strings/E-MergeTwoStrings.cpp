//https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

string merge (string S1, string S2)
{
    // your code here
    int s = S1.size()+S2.size();
    string ans = "";
    //cout<<ans<<","<<s<<endl;
    int i=0,j=0,k=0;
    while(S1[i]!='\0' && S2[j]!='\0'){
        string s1(1,S1[i]);
        string s2(1,S2[j]);
        ans.insert(k,s1);
        ans.insert(k+1,s2);
        //ans[k] = S1[i];
        //ans[k+1] = S2[j];
        //cout<<ans[k]<<","<<ans[k+1]<<endl;
        k = k + 2;
        i++;
        j++;
    }
    //cout<<ans<<"-this"<<endl;
    while(S1[i]!='\0'){
        string s1(1,S1[i]);
        ans.insert(k,s1);
        k++;
        i++;
    }
    while(S2[j]!='\0'){
        string s2(1,S2[j]);
        ans.insert(k,s2);
        k++;
        j++;
    }
    return ans;
}