#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back 
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(v) v.begin(),v.end()

const int MAX_N = 1000003;
const int LOG = 21;
const int mod=1e9+7;
int a[MAX_N];
int m[MAX_N][LOG]; 
int bin_log[MAX_N];

int query(int L, int R) {   //Complexity is O(1)  
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R-(1<<k)+1][k]);
}

int lp[MAX_N+1];
vector<int> pr;
void sieve()     //linear sieve to calculate smallest prime factors of numbers (O(MAX_N))
{
    for (int i=2; i<=MAX_N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=MAX_N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

map<int,int> prime_factor(int n)  //worst case complexity O(log n)
{
    map<int,int> m;
    while(n!=1)
    {
        m[lp[n]]++;
        n/=lp[n];
    }
    return m;
}
ll calc(int n)   //worst case O(log n)
{
    map<int,int> m=prime_factor(n);
    ll ans=1;
    for(pair<int,int> c : m)
    {
        ans=(ans*((1+(c.first-1)*(c.first-1))%mod))%mod;
    }
    return ans;
}
ll solved[MAX_N]={0};
void solve()
{
    int n,q;
    cin >> n>>q;
    bin_log[1] = 0;
    for(int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i/2]+1;
    }
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        m[i][0] = a[i];
    }
    //preprocessing for sparse table, O(n*log(n))
    for(int k = 1; k < LOG; k++) {
        for(int i = 0; i + (1 << k) - 1 < n; i++) {
            m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
        }
    }
    for(int i = 0; i < q; i++) {   //worst case complexity is O(q*log(max_element_of_array))
        int l, r;
        cin >> l >> r;
        int value=query(l-1,r-1);
        ll ans=0;
        if(solved[value])
        {
            cout<<solved[value]<<" ";
        }
        else
        {
            ans=calc(value);
            solved[value]=ans;
            cout<<ans<<" ";
        }    
    }
    cout<<"\n";    

}
int main()
{
    fast_io();
    sieve();   
    ll t;
    cin>>t;
    while(t--)
    {
        solve();  //worst case complexity per test case after precomputation is O(nlogn+q*log(max(A)))
    }
    return 0;
}

