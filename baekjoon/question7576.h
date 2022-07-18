//
// Created by 안태욱 on 2022/07/17.
//

#ifndef ALGORITHM_QUESTION7576_H
#define ALGORITHM_QUESTION7576_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;




int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    int arr[n][m];
    int dis[n][m];

    queue<pair<int, int>> Q;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int value;
            cin >> value;
            arr[i][j] = value;
            if(value == 1) {
                Q.push({i, j});
                dis[i][j] = 0;
            } else if (value == 0) {
                dis[i][j] = -1;
            } else {
                dis[i][j] = -2;
            }
        }
    }

    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};

    while(!Q.empty()) {

        pair<int, int> current = Q.front();
        Q.pop();

        for(int i=0; i<4; i++) {
            int x = current.first+dx[i];
            int y = current.second+dy[i];
            if(x < 0 || x >= n || y < 0 || y >= m) continue;
            if(arr[x][y] == -1 || arr[x][y] == 1) continue;
            if(dis[x][y] != -1) continue;
            dis[x][y] = dis[current.first][current.second] + 1;
            Q.push({x, y});
        }
    }

    int ans = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int value = dis[i][j];
            if(value == -1) {
                cout << -1;
                return 0;
            }
            if(value >= 0 && value > ans) ans = value;
        }
    }

    cout << ans;


    return 0;
}




#endif //ALGORITHM_QUESTION7576_H
