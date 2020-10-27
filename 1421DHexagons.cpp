
#include "bits/stdc++.h"
#include "iostream"
using namespace std;
 
void solve()
{
    long long x,y, x0 ,y0 , c1 , c2 , c3 , c4 , c5 ,c6;
    cin>>x>>y;
    cin>>c1>>c2>>c3>>c4>>c5>>c6;
    x0 = 0 ; y0 = 0;
 
    long long ans=(x>=0?c6:c3)*abs(x)+(y>=0?c2:c5)*abs(y);
    ans=min(ans,(x>=0?c1:c4)*abs(x)+(y-x>=0?c2:c5)*abs(y-x));
    ans=min(ans,(y>=0?c1:c4)*abs(y)+(y-x>=0?c3:c6)*abs(y-x));
 
        cout<<ans<<"\n";
 
}
 
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        solve();
    }
 
}
