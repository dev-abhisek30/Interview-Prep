//https://practice.geeksforgeeks.org/problems/missing-number4257/1
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum1 = 0;
    for(int i=1;i<=N;i++){
        sum1 = sum1 ^ i;
    }
    int sum = 0;
    for(int i=0;i<N-1;i++){
        sum = sum ^ A[i];
        //cout<<sum<<endl;
    }
    //cout<<sum<<","<<sum1<<endl;
    return sum^sum1;
}