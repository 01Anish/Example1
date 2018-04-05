#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,a,b;
    long long cost = 0;
    cin>>n>>k>>a>>b;
    if(k==1)
        cost = (n-1)*a;
    else{
    while(n!=1)
    {
        if(n%k==0)
        {
            if((n-n/k)*a<b)
                cost+=(n-n/k)*a;
            else
                cost+=b;
            n/=k;
        }
        else{
            if(n>k){
            cost=cost+a*(n%k);
            n=n-(n%k);}
            else
            {
                cost=cost+(n%k-1)*a;
                n = n - (n%k) + 1;
            }
        }
    }
    }
    cout<<cost;
    return 0;
}
