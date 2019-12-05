//#include <bits/stdc++.h>
#include <vector> 
#include <iostream>
#inclide <cstdlib>
using namespace std;

std::vector<std::vector<int> > rs, cs;

int row(int r, int y1, int y2){
    return min(rs[r][y2] - rs[r][y1 - 1], y2 - y1 + 1 - (rs[r][y2] - rs[r][y1 - 1]));
}

int column(int c, int x1, int x2){
    return min(cs[c][x2] - cs[c][x1 - 1], x2 - x1 + 1 - (cs[c][x2] - cs[c][x1 - 1]));
}

int main(){

    int m, n;
    cin >> m >> n;

    vector<vector<int>> a(m + 1, vector<int>(n + 1));
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    rs.resize(m + 1, vector<int>(n + 1));
    cs.resize(n + 1, vector<int>(m + 1));

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            rs[i][j] = a[i][j] + rs[i][j - 1];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cs[i][j] = a[j][i] + cs[i][j - 1];
        }
    }

    vector<vector<vector<vector<int>>>> dp(m + 1, vector<vector<vector<int>>>(n + 1, vector<vector<int>>(m + 1, vector<int>(n + 1))));

    for(int rl = 1; rl < m; rl++){ //§t¦³ rl+1 ¦C
        for(int cl = 1; cl < n; cl++){ //§t¦³ cl+1 ¦æ
            for(int i = 1; i + rl <= m; i++){
                for(int j = 1; j + cl <= n; j++){

                    dp[i][j][i + rl][j + cl] = min({
                        dp[i + 1][j][i + rl][j + cl] + row(i, j, j + cl),
                        dp[i][j + 1][i + rl][j + cl] + column(j, i, i + rl),
                        dp[i][j][i + rl - 1][j + cl] + row(i + rl, j, j + cl),
                        dp[i][j][i + rl][j + cl - 1] + column(j + cl, i, i + rl)
                    });
                }
            }
        }
    }

    cout << dp[1][1][m][n] << "\n";

    return 0;
}
