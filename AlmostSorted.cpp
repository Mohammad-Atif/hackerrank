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


int checksorted(vector<ll> ar, ll n)
{
    for(ll i=0;i<n-1;i++)
    {
        if(ar[i]>ar[i+1])
        return 0;
    }
    return 1;
}

int main()
{ 
    ll n,i,count=0;
    cin>>n;
    vector<ll> ar(n);
    for (i=0;i<n;i++)
    cin>>ar[i];
    if(checksorted(ar,n))
    YES
    else
    {
        vector<ll> sorted_one=ar,unmatched;
        sort(all(sorted_one));
        for(i=0;i<n;i++)
        {
            if(ar[i]!=sorted_one[i])
            {
                unmatched.push_back(i);
            }
        }
        if(unmatched.size()==2)
        {
            cout<<"yes\n";
            cout<<"swap "<<unmatched[0]+1<<" "<<unmatched[1]+1;
        }
        else
        {
            ll flag=1;
            for(i=0;i<=unmatched.size()/2;i++)
            {
                if(sorted_one[unmatched[unmatched.size()-i-1]]!=ar[unmatched[i]])
                {
                    cout<<"no\n";
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                cout<<"yes\n";
                cout<<"reverse "<<unmatched[0]+1<<" "<<unmatched[unmatched.size()-1]+1;
            }
        }
    }

    reto
}
