#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
using ii=pair<ll, ll>;
#define vi vector<int>
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define f first
#define s second
const int mod=1e9+7;
const int inf=1e9;
const int N=2e3+10;
char a[N][N];

int main(){
    fast
    ll n,m,r,c,x,y;
    cin>>n>>m;
    cin>>r>>c;
    cin>>x>>y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
           cin>>a[i][j];
        }
    }
    deque<pair<ii,ii>> q;
    q.push_back({{r,c},{x,y}});
    int ans=0;
    while(!q.empty()){
        auto t=q.front();
        q.pop_front();
        if(a[t.f.f][t.f.s]=='*')
            continue;
        a[t.f.f][t.f.s]='*';
        ans++;
        if(a[t.f.f-1][t.f.s]!='*' and t.f.f-1>=1)
            q.push_front({{t.f.f-1,t.f.s},{t.s.f,t.s.s}});
        if(a[t.f.f+1][t.f.s]!='*' and t.f.f+1<=n)
            q.push_front({{t.f.f+1,t.f.s},{t.s.f,t.s.s}});
        if(t.s.s and a[t.f.f][t.f.s+1]!='*' and t.f.s+1<=m)
            q.push_back({{t.f.f,t.f.s+1},{t.s.f,t.s.s-1}});
        if(t.s.f and a[t.f.f][t.f.s-1]!='*' and t.f.s-1>=1)
            q.push_back({{t.f.f,t.f.s-1},{t.s.f-1,t.s.s}});
    }
    cout<<ans<<'\n';
    return 0;
}
		  		   	 	      		 			  		 	