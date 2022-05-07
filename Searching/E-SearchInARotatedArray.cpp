//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int bSearch(int A[],int l,int h,int key){
        while(l<=h){
            int mid = (l+h)/2;
            if(A[mid]==key){
                return mid;
            }else if(A[mid]>key){
                h = mid -1;
            }else{
                l = mid +1;
            }
        }
        return -1;
    }
    int search(int A[], int l, int h, int key){
    //complete the function here
        int min = INT_MAX;
        int index = -1;
        for(int i=0;i<=h;i++){
            if(min>A[i]){
                min = A[i];
                index = i;
            }
        }
        if(min == 0){
            return bSearch(A,l,h,key);
        }else{
            int lh = bSearch(A,0,index-1,key);
            if(lh!=-1){
                return lh;
            }
            int rh = bSearch(A,index,h,key);
            if(rh!=-1){
                return rh;
            }
        }
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends