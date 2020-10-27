#include<bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main(){
    int n,k;
    cin>>n>>k;
    ll id[n];
    for(int i=0;i<n;i++)
        cin>>id[i];
    queue<ll> q;
    map<ll, bool> pres;
    int kk = 0;
    for(int i=0;i<n;i++){
        if(pres[id[i]] == false){
            //cout<<"Current Elements = "<<kk<<"\n";
            if(kk >= k){
                ll ele = q.front();
                q.pop();
                pres[ele] = false;
                kk--;
                //cout<<"Removed "<<ele<<"\n";
            }
            q.push(id[i]);
            pres[id[i]] = true;
            kk++;
            //cout<<"Added "<<id[i]<<"\n";
        }
    }
    vector<ll> ls;
    while(!q.empty()){
        ls.push_back(q.front());
        q.pop();
    }
    cout<<ls.size()<<"\n";
    for(int i=ls.size()-1;i>=0;i--)
        cout<<ls[i]<<" ";
    return 0;
}
