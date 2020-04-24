#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int k;
    for(int i = 1 ; i < n ; i++)
        a[i] = a[i] + a[i-1];
    cin >> k;
    int ans ;
    while(k--)
    {
        int m;
        cin >> m;
        ans = lower_bound(a,a+n,m) - a;
        cout << ans +1 << endl;
    }
    return 0;
}
