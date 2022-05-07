//https://practice.geeksforgeeks.org/problems/save-ironman0227/1#
#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}
// } Driver Code Ends



bool saveIronman(string ch)
{
    string ch1 = "";
    int k = 0;
    for(int i=0;ch[i]!='\0';i++){
        int c = ch[i];
        if((c<=90 && c>=65) ||(c<=122 && c>=97) || (c<=57 && c>=48)){
            char ch2 = tolower(ch[i]);
            string s(1,ch2);
            ch1.insert(k,s);
            k++;
        }
    }
    int m = ch1.size();
    int n = m-1;
    //cout<<ch1<<endl;
    for(int i=0;i<(m/2);i++){
        if(ch1[i] == ch1[n]){
            
        }else{
            //cout<<ch1[i]<<" and "<<ch1[n]<<endl;
            return false;
        }
        n--;
    }
    return true;
}
