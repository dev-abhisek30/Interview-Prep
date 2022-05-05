//https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1#
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int digits = (int) log10(n)+1;
        int n1 = n;
        int sum = 0;
        while(n1>0){
            sum += pow((n1%10),digits);
            n1 = n1/10;
        }
        if(sum == n){
            return "Yes";
        }else{
            return "No";
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}