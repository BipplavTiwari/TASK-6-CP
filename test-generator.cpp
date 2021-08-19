#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back 
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define mp make_pair

const int MAX_N = 1000003;

int lp[MAX_N+1];
vector<int> pr;
void sieve()
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

int main()
{    
    sieve();
    ofstream outdata;
    outdata.open("tests.txt");
    
    vector<int> v;
    
    ll element=1;
    
    for(int i=0;(i<pr.size())&&(element*pr[i]<MAX_N);i++)
    {
        element*=pr[i];
        v.pb(element);
    }
    for(int i=v.size();i<100000;i++)
    {
        int a=(rand()%999997)+2;
        v.pb(a);
    }
    int t=1000;    
    outdata<<t<<"\n";
    outdata<<10000<<" "<<10000<<"\n";
    for(int i=0;i<10000;i++)
    {
        outdata<<v[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<10000;i++)
    {
        int l=rand()%4997+1;
        int r=rand()%4997+1;
        outdata<<l<<" "<<l+r<<"\n";
    }
    for(int i=0;i<t;i++)
    {
        int arr_size=(rand()%1000)+100;
        int query_size=(rand()%500)+100;
        int start=(rand()%5000)+100;
        outdata<<arr_size<<" "<<query_size<<"\n";
        for(int j=0;j<arr_size;j++)
        {
            outdata<<v[start+j]<<" ";
        }
        outdata<<"\n";
        
        for(int j=0;j<query_size;j++)
        {
            int l=(rand()%300)+1;
            int r=(rand()%300)+1;
            outdata<<l<<" "<<l+r<<"\n";
        }
    }
    return 0;
}
