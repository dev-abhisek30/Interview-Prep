//https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1#
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
void printPat(int n)
{
    int n1 = n;
    for(int i=n*n;i>=n;i=i-n){
        int n1 = n;
        for(int j = n;j>=1;j--){
            for(int k = 0;k<(n1/n);k++){
                cout<<n1<<" ";
            }
            n1--;
        }
        cout<<"$";
    }
}