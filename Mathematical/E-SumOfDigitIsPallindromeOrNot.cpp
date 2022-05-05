//https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int sum = 0;
        int num = N;
        while(N>0){
            sum += N % 10;
            N = N/10;
        }
        
        int rev = 0;
        int digits = (int) log10(sum);
        int n1 = sum;
        while(n1>0){
            rev += (n1%10)*pow(10,digits);
            n1 = n1/10;
            digits--;
        }
        
        /*for(int i=digits;i>=0;i--){
            rev += (n1%10)*pow(10,digits);
            n1 = n1/10;
        }*/
        //cout<<sum<<","<<rev<<","<<digits<<endl;
        if(rev==sum)
            return 1;
        else
            return 0;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}