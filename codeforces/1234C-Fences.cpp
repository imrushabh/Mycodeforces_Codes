#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[2];
        cin>>s[0]>>s[1];
        int pos = 0, row = 0;
        for(;pos<n;pos++){
            if(s[row][pos] >= '3'){
                if(s[!row][pos] < '3')
                    break;
                else    row = !row;
            }
        }
        if(pos == n and row == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
