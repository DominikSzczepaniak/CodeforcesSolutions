#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> input(n);
    vector<int> sorted(n);
    for(int i = 0; i<n; i++){
        cin >> input[i];
        sorted[i] = input[i];
    }
    sort(sorted.begin(), sorted.end());
    int segment = 0;
    vector<int> starts;
    vector<int> ends;
    bool cont = false;
    for(int i = 0; i<n; i++){
        if(input[i] != sorted[i]){
            if(!cont){
                segment++;
                cont = true;
                starts.push_back(i);
            }
        }
        if(input[i] == sorted[i]){
            if(cont){
                cont = false;
                ends.push_back(i-1);
            }
        }
    }
    if(cont){
        ends.push_back(n-1);
    }
    if(segment == 0){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else if(segment ==1){
        vector<int> newarray;
        int start = starts[0], end = ends[0];
        for(int i = 0; i<start; i++){
            newarray.push_back(input[i]);
        }
        for(int i = end; i>=start; i--){
            newarray.push_back(input[i]);
        }
        for(int i = end+1; i<n; i++){
            newarray.push_back(input[i]);
        }
        for(int i = 0;i<n; i++){
            if(newarray[i] != sorted[i]){
                cout << "no" << endl;
                return 0;
            }
        }
        cout << "yes" << endl;
        cout << start+1 << " " << end+1 << endl;
    }
    else{
        vector<int> newarray;
        int start = starts[0];
        int end = ends.back();
        // cout << start << " " << end << endl;
        for(int i = 0; i<start; i++){
            newarray.push_back(input[i]);
        }
        for(int i = end; i>=start; i--){
            newarray.push_back(input[i]);
        }
        for(int i = end+1; i<n; i++){
            newarray.push_back(input[i]);
        }
        // for(int i : newarray){
        //     cout << i << " ";
        // }
        // cout << endl;
        for(int i = 0;i<n; i++){
            if(newarray[i] != sorted[i]){
                cout << "no" << endl;
                return 0;
            }
        }
        cout << "yes" << endl;
        cout << start+1 << " " << end+1 << endl;
    }



}
 