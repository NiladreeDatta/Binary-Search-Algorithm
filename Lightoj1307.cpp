#include<bits/stdc++.h>
using namespace std;
int a[2000],n,tc;

int binarysearch(int i, int j)
{
    int total = a[i] + a[j];
    int low  = j + 1;
    int high = n - 1 ;
    int mid;
    int position = j;
    while(low <= high)
    {
        mid = low + (high - low) / 2;
        if(a[mid] < total)
        {
            position = mid;
            low = mid + 1;
        }
        else
            high  = mid - 1;
    }
    return (position - j) ;
}

int main()
{
    cin >> tc;
    int x = 1;
    while(tc--)
    {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a,a+n);
        a[n] = 2*a[n-1] + 5;
        int sum = 0;
        for(int i = 0 ; i <= n-3 ; i++)
        {
            for(int j = i+1 ; j <= n-2 ; j++)
            {
                sum += binarysearch(i,j);
            }
        }
        printf("Case %d: %d\n",x++,sum);

    }

    return 0;
}

