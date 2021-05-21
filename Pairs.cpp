#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define pb push_back
#define deb(x) cout<<x<<"\n";
#define deB(x,y) cout<<x<<" "<<y<<"\n";
#define Deb(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n";
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define all(v) (v).begin(),(v).end()

#define cont continue;
#define reto return 0;
#define sz size()
#define spmod 1116295198451
#define mod 1000000007
#define md 998244353 
#define N 200009

//applying the brute force approacch of O(n^2)
/*
Not completing all test cases 
Need to be optimised 
*/

ll diff(ll a,ll b)
{
    return a>=b?a-b:b-a;
}

int main()
{ 
    ll n,k,i,j,ans=0;
    cin>>n>>k;
    vector<ll> arr(n);

    for(i=0;i<n;i++)
    cin>>arr[i];

    sort(all(arr));

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(diff(arr[i],arr[j])==k)
            ans++;
        }
    }
    deb(ans);

    reto
}