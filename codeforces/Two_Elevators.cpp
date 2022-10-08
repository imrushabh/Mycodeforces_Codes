#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int time = 0, time1 = 0;
        if (a == 1)
        {
            cout << "1\n";
        }
        else
        {
            time = time + (abs(c - b) + abs(c - 1));
            time1 = time1 + abs(a - 1);
            if (time1 < time)
            {
                cout << "1\n";
            }
            else if (time1 > time)
            {
                cout << "2\n";
            }
            else if (time1 == time)
            {
                cout << "3\n";
            }
        }
    }
    return 0;
}
