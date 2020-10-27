#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll s = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            s += a;
        }
        ll ans = ceil((double)s/(double)n);
        cout<<ans<<"\n";
    }
    return 0;
}
