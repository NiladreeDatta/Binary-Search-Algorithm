#include<bits/stdc++.h>
using namespace std;

const int me = 100025;
int t;
long long int n,k;
int seive[me];
vector <long long> primes;

int main()
{
    for(int i = 2 ; i < me ; i++)
    {
        if(!seive[i])
        {
            primes.push_back(1LL*i*i);
            for(int j = i + i ; j < me ; j += i)
                seive[j] = 1;
        }
    }
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int total = (int)(upper_bound(primes.begin(),primes.end(),n) - primes.begin());
        int good = total - (int)(upper_bound(primes.begin(),primes.end(),k) - primes.begin());
        cout << total << " " << max(0,good) << endl;
    }


    return 0;
}
