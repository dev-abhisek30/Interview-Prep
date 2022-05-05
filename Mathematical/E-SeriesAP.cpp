//https://practice.geeksforgeeks.org/problems/series-ap5310/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthTermOfAP(int A1, int A2, int N) {
        // code here
        int d = A2-A1;
        int ap = A1 + ((N-1)*d);
        return ap;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A1, A2, N;
        cin >> A1 >> A2 >> N;
        Solution ob;
        cout << ob.nthTermOfAP(A1, A2, N) << "\n";
    }
}