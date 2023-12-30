#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int n;
    scanf("%d", &n);
    vector<int> input(n);
    vector<int> sorted(n);
    vector<pair<int, int>> nums((int)1e5+5);
    for(int i = 0; i<n; i++){
        scanf("%d", &input[i]);
        sorted[i] = input[i];
        if(i%2==1){
            nums[input[i]].second++;
        }
        else{
            nums[input[i]].first++;
        }
    }
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i<n; i++){
        // printf("%d -> %d parzystych %d nieparzystych\n", sorted[i], nums[sorted[i]].first, nums[sorted[i]].second);
        if(i%2==0){
            if(nums[sorted[i]].first >= 1){
                nums[sorted[i]].first--;
            }
            else{
                printf("NO\n");
                return;
            }
        }
        else{
            if(nums[sorted[i]].second >= 1){
                nums[sorted[i]].second--;
            }
            else{
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");

    
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}