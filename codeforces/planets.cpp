#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int ans=0;
        vector<pair<int, int> > orbit;
        int i=0;
        while(i<n) {
            int count=1;
            while(arr[i+1]==arr[i] && i<n)
            {
                count++;
                i++;
            }
            orbit.push_back(make_pair(arr[i],count));
            i++;
        }
        for(int i=0; i<orbit.size(); i++) {
            if(c<orbit[i].second) ans+=c;
            else ans+=orbit[i].second;
        }
        cout << ans << endl;
    }
}
