//https://practice.geeksforgeeks.org/problems/upper-case-conversion5419/1#
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}// } Driver Code Ends



string transform(string s)
{
    // code here
    string ans = s;
    ans[0] = toupper(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]==' '){
            ans[i+1] = toupper(s[i+1]);
        }
    }
    return ans;
}