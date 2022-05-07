//https://practice.geeksforgeeks.org/problems/reverse-an-array/0#
#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin>>t;
	/*while(t--){
	    int s = 0;
	    cin>>s;
	    int arr[s];
	    for(int i=s-1;i>=0;i--){
	        int k = 0;
	       cin>>k;
	       arr[i] = k;
	    }
	    
	    for(int i=0;i<s;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}*/
	while(t--){
	    int s = 0;
	    cin>>s;
	    int arr[s];
	    for(int i=0;i<s;i++){
	       int k = 0;
	       cin>>k;
	       arr[i] = k;
	    }
	    int j=s-1;
	    for(int i=0;i<(s/2);i++){
	        int temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	        j--;
	    }
	    
	    for(int i=0;i<s;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}