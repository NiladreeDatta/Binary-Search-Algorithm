#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin >> n >> k;
    long long int l = -1;
    long long int r = n+1;
    while(r-l > 1)
    {
        long long int m = (l+r)/2;
        if((n-m)*(n-m+1)/2 - m > k)
            l = m;
        else
            r = m;
    }
    cout << r << endl;

    return 0;
}
