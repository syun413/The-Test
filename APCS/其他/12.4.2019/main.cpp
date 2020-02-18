#include <bits/stdc++.h>

#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second

using namespace std;

int main(){

    int n, p, l, r;
    cin >> n >> p >> l >> r;

    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<bool> visit(n);
    queue<pii> q;
    q.push(mp(0, 0));
    visit[0] = true;
    while(!q.empty()){
        int v = q.front().F, step = q.front().S;
        q.pop();
        if(v == p){
            cout << step << "\n";
            return 0;
        }

        if(v - l >= 0 && s[v - l] >= 0 && s[v - l] < n && !visit[s[v - l]]){
            q.push(mp(s[v - l], step + 1));
        }
        if(v + r >= 0 && s[v + r] >= 0 && s[v + r] < n && !visit[s[v + r]]){
            q.push(mp(s[v + r], step + 1));
        }
    }
    cout << "-1\n";

    return 0;
}
