//https://practice.geeksforgeeks.org/problems/print-table0303/1
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> table;
        for(int i=1;i<=10;i++){
            table.push_back(N*i);
        }
        return table;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}