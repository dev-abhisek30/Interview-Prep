//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> a;
        int i=0;
        string ans="";
        while(S[i]!='\0'){
            string a1="";
            int j=0;
            while(S[i]!='.' && S[i]!='\0'){
                string ch(1,S[i]);
                a1.insert(j,ch);
                j++;
                i++;
            }
            //cout<<a1<<"-"<<i<<endl;
            a.push_back(a1);
            if(S[i]=='\0'){
                break;
            }
            i++;
        }
        int j=0;
        
        string dot = ".";
        for(i=0;i<a.size();i++){
            j = 0;
            ans.insert(j,a[i]);
            j = ans.size();
            //cout<<ans<<endl;
            if(i!=a.size()-1){
                ans.insert(0,dot);
            }
            //cout<<ans<<endl;
                //ans.insert((ans.size()+1),dot);
            //j = ans.size()-1;
            
            //cout<<a[i]<<endl;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends