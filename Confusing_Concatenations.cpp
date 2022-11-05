#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int maxi = -1;      // maxi ka matlab maximum index h
        int maxe = INT_MIN; // maxe ka matlab maximum element h
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
            if (x > maxe)
            {
                maxe = x;
                maxi = i;
            }
        }
        if (v[0] == maxe)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << maxi << endl;
            for (int i = 0; i < maxi; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            cout << n - maxi << endl;
            for (int i = maxi; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
