#include<bits/stdc++.h>
using namespace std;
long long int a[50000],i;
void solve()
{
        long long  int n = 2;
        a[1] = 2;
        i = 1;
        while(n <= 1e9)
        {
            n = n + (3*i) + 2;
            i++;
            a[i] = n;
        }
}
int main()
{
    int tc;
    cin >> tc;
    solve();
    while(tc--)
    {
        int x;
        cin >> x;
        int cnt = 0;
        while(x >= 2)
        {
            int p = upper_bound(a+1,a+i+1,x) - a;
            cnt++ ;
            x -= a[p-1];
        }
        cout << cnt << endl;
    }

    return 0;
}
