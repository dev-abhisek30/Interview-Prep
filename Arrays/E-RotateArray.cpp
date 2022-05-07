//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0#
#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin>>t;
	while(t--){
	   long long x=0,y=0;
	   cin>>x>>y;
	   long long arr[x];
	   long long arr1[y];
	   long long j=0;
	   for(long long i=0;i<x;i++){
	       cin>>arr[i];
	       if(j<y){
	           arr1[j] = arr[i];
	           j++;
	       }
	   }
	   long long i=0;
	   for(i=0;i<x-y;i++){
	       arr[i] = arr[i+y];
	   }
	   j =0;
	   for(long long k =i;k<x;k++){
	       arr[k] = arr1[j];
	       j++;
	   }
	   for(i=0;i<x;i++){
	       cout<<arr[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}