//https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1#
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int leftShift(int a[],int n,int k){
        for(int i=k;i<n-1;i++){
            a[i] = a[i+1];
        }
        return n-1;
    }
    int remove_duplicate(int a[],int n){
        // code here
        int index=1;
        int i=0,j=1,k=1;
        while(j<n){
            if(a[j]==a[i]){
                n = leftShift(a,n,j);
            }else{
                i++;
                j++;
            }
        }
        return j;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
} 