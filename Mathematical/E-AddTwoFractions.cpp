//https://practice.geeksforgeeks.org/problems/add-two-fractions/1
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}
// } Driver Code Ends

int gcd(int d1,int d2){
    if(d1==0){
        return d2;
    }
    return gcd(d2%d1,d1);
}
void addFraction(int num1, int den1, int num2,int den2){
    int num =0,den=0;
    if(den1==den2){
        num = num1+num2;
        den = den1;
    }else{
        int t = den1*den2;
        int g = gcd(den1,den2);
        int lcm = t/g;
        //cout<<t<<","<<g<<","<<lcm<<endl;
        den = lcm;
        num = ((num1*(lcm/den1))+(num2*(lcm/den2)));
    }
    //cout<<num<<"/"<<den<<endl;
    int m = max(num,den);
    int i=2;
    while(i<=m){
        if((num%i==0)&&(den%i==0)){
            num /= i;
            den /= i;
        }else{
            i++;
        }
    }

    cout<<num<<"/"<<den<<endl;
}