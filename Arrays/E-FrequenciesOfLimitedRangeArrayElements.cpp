//https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1#
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
            //arr[i] = 0;
        }
        
        //for(auto i=mp.begin();i!=mp.end();i++){
            //cout<<i->first<<","<<i->second<<endl;
        //}
        arr.clear();
        for(int i=0;i<N;i++){
            //cout<<mp[i+1]<<endl;
            if(mp[i+1]==0){
                //arr[i] = 0;
                arr.push_back(0);
            }else{
                //arr[i] = mp[i+1];
                arr.push_back(mp[i+1]);
            }
        }
    }
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}




  // } Driver Code Ends