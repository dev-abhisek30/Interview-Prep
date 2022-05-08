//https://practice.geeksforgeeks.org/problems/gcd-of-array0614/1
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
    int gcdFun(int d1,int d2){
        if(d1==0){
            return d2;
        }
        return gcdFun(d2%d1,d1);
    }
    int gcd(int N, int arr[])
    {
    	// Your code goes here
        if(N==1){
            return arr[0];
        }
        int g = gcdFun(arr[0],arr[1]);
        for(int i=2;i<N;i++){
            g = gcdFun(g,arr[i]);
        }
        return g;
    }
};


// { Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}  // } Driver Code Ends