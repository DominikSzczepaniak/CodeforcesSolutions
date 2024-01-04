#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, n, m) for(int i=n; i<m; ++i)
#define FORE(i,n,m) for(int i=n;i<=m; ++i)
#define INSPLIT(ar) for (auto &it : ar) cin >> it
#define SORT(ar) sort((ar).begin(), (ar).end())
#define SORTD(ar) sort(ar.rbegin(), ar.rend())
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcases int t; cin>>t; while(t--)

bool jednokwadrat(int n){ // do poprawy
    string s = to_string(n);
    int temp = 0;
    FOR(j,0,s.length()){
        temp += ((s[j] - '0') * (s[j] - '0'));
    }
    if(temp!=1 && temp!=4){
        jednokwadrat(temp);
        return false;
    }
    if(temp == 1){
        return true;
    }
    else if(temp == 4){
        return false;
    }
}
bool is_prime(int n){
    for(int i = 2; i < sqrt(n)+1; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void a(){ //1
    int n, m;
    cin >> n >> m;
    int arr[n][n];
    FOR(i,0,n){
        FOR(j,0,n){
            cin >> arr[i][j];
        }
    }
    FOR(i,0,m){
        char c;
        int one;
        cin >> c >> one;
        if(c == 'A'){
            int l = one % 360;
            if(l==90){
                int odp[n][n];
                FOR(i,0,n){
                    FOR(j,0,n){
                        swap(arr[i][j], arr[j][i]);
                    }
                }
                FOR(i,0,n){
                    for (int j = 0, k = n - 1;
                        j < k; j++, k--)
                        swap(arr[j][i], arr[k][i]);
                }
            }
            else if(l==180){
                continue;
            }
            else if(l==270){
                continue;
            }
            else if(l==360){
                continue;
            }
        }
        else if(c == 'Q'){ //update sa na podstawowej macierzy, trzeba jeszcze zapisac ilosc obrotow i znow obrocic o sume poprzednich obrotow
            int two;
            cin >> two;
            cout << arr[one][two] << endl;
        }
        else if(c == 'U'){
            int two, three;
            cin >> two >> three;
            arr[one][two] = three;
        }
    }
}
void b(){ //2 //done
    int n, k;
    cin >> n >> k;
    vector<double> A(n);
    FOR(i,0,n){
        cin >> A[i];
    }
    ll sum=0;
    FOR(i,0,k){
        SORTD(A);
        A[0] = floor(A[0]/2);
    }
    FOR(i,0,n){
        sum += A[i];
    }
    cout << sum << endl;
}
void c(){ //3 //done
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    FOR(i,0,n){
        cin>>A[i];
    }
    int sum = 0;
    SORT(A);
    FOR(i,0,n){
        FOR(j,1,n){
            if(A[i] - k <= A[i-j] && A[i] != A[i-j] && i > i-j && i-j >= 0 && i-j <= n-1){
                sum++;
                break;
            }
            else if(A[i] + k >= A[i+j] && A[i] != A[i+j] && i < i+j && i+j <= n-1 && i+j >= 0){
                sum++;
                break;
            }
        }

    }
    cout << sum << endl;
}
void d(){ //4
    int l, u, k;
    cin >> l >> u >> k;
    vector<int> odp;
    for(int i = l; i<=u; i++){
        if(is_prime(i) == true){
            cout << i << " ------ NOWY TEST" << endl;
            if(jednokwadrat(i) == true){
                odp.push_back(i);
                //cout << i << " ------ DODANIE" << endl;
            }
            else{
                continue;
            }
        }
    }
    cout << "LISTA" << endl;
    for(int element : odp){
        cout << element << endl;
    }
    cout << odp[k-1] << endl;
}
void e(){ //5
    int n, d;
    cin >> n >> d;
    vector<int> p;
    int granica = n + d-1;
    int i = 2;
    while(true){
        if(p.size() < granica){
            if(is_prime(i) == true){
                p.push_back(i);
            }
        }
        else{
            break;
        }
        i++;
    }
    vector<int> q;
    FOR(i,0,n){
        q.push_back(p[i] * p[i+d]);
    }
    q.pop_back();
    ll ans = 0;
    //FOR(E, 0, q.size()){
    FOR(D,0,q.size()){
        FORE(C,0,D){
            FORE(B,0,C){
                FORE(A,0,B){
                    ll c = q[A] + q[B] + q[C] + q[D];
                    if(count(q.begin(), q.end(), c) > 0){
                        ans++;
                        //cout << q[A] << " " << q[B] << " " << q[C] << " " << q[D] << " " << c << endl;
                    }
                }
            }
        }
    }
    //
    //cout << "LISTA" << endl;
    //for(int element : q){
    //    cout << element << endl;
    //
    //cout << p.size() << endl;
    cout << ans << endl;

}
void f(){ //6
}
void cukzad(){
    int n;
    cin >> n;
    vector<vector<int>> gablota;

}




int main() {
    string s;
    cin >> s;
    vector<char> aa;
    FOR(i,0,s.length()){
        aa.push_back(s[i]);
    }
    char b = *max_element(aa.begin(), aa.end());
    int c = count(s.begin(), s.end(), b);
    FOR(i,0,c){
        cout << b;
    }
}