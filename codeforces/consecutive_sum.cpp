#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin>>t;
    for(int T=0;T<t;T++){
       long long int n,k;
       cin>>n>>k;
       vector<long long int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       long long int sum=0;
       for(int i=0;i<n && i+k<n;i++){
        if(a[i]>a[i+k]){
            swap(a[i],a[i+k]);
        }
       }
       for(int i=n-k;i<n;i++){
        sum=sum+a[i];
       }
       cout<<sum<<"\n";
    }
}
