#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> 
const int R = 1<<20;
ll T[2*R];
 
void update(ll a){
    a--;a+=R;T[a]++;a/=2;
    while(true){
        if(a == 1){
            return;
        }
        T[a] = T[a*2] + T[a*2+1];
        a/= 2;
    }
    return;
}
 
ll query(ll a, ll b){
    a--; b--; a+=R; b+=R;
    ll answer = T[a];
    if(a == b){
        return answer;
    }
    answer += T[b];
    while(a / 2 != b / 2){
        if(a%2==0){
            answer += T[a+1];
        }
        if(b % 2 == 1){
            answer += T[b-1];
        }
        a/=2;
        b/=2;
    }
    return answer;
}
 
ll cleft(vector<ll> &a, ll miejsce){
    ll start = 0, end = a.size()-1;
    while(start < end){
        ll mid = (start+end+1)/2;
        if(a[mid] > miejsce){
            end = mid-1;
        }
        else{
            start = mid;
        }
    }
    if(a[start] < miejsce){
        return start;
    }
    else if(a[start] <= miejsce){
        return start+1;
    }
    else{
        return start;
    }
}
 
ll cright(vector<ll> &a, ll miejsce, ll n){
    ll start = 0, end = a.size()-1;
    while(start < end){
        ll mid = (start+end)/2;
        if(a[mid] < miejsce){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return a.size() - start;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll input[n];
    memset(T, 0, sizeof(T));
    map<ll, vector<ll>> pos;
    for(ll i = 0; i<n; i++){
        cin >> input[i];
        pos[input[i]].push_back(i+1);
    }
    ll left[n];
    ll right[n]; 
    for(ll i = 1; i<n; i++){
        ll val = cleft(pos[input[i-1]], i);
        left[i] = val;
    }
    for(ll i = n; i>=2; i--){
        ll val = cright(pos[input[i-1]], i, n);
        right[i] = val;
    }
    ll answer = 0;
    for(ll i = n-1; i>=1; i--){
        update(right[i+1]);
        if(left[i] <= 1){
            continue;
        }
        answer += query(1, left[i]-1);
 
    }
    cout << answer << endl;
    return 0;
 
}