#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define sd second
#define ft first
#define pb push_back
using namespace std;

int main()
{
    //ll t;
    //cin>>t;
    //while(t--)
    {
       ll n,cnt=0,cur=0, ans=0, f=0,j=0,x,y;
       cin>>x>>y;
       cur=min(x/2,y/2);
       x=x-(2*cur);
       y=y-(2*cur);
       if(y>=22)
       {
           cnt=y/22;
           cur+=cnt;
           y-=cnt*22;
       }
       if(y>11 && x>=1)
       {
           cnt=min(y/11, x);
           cur+=cnt;
       }
       //cout<<cur<<endl;

       if(cur&1)
        cout<<"Ciel"<<endl;
       else
        cout<<"Hanako"<<endl;

    }
}
