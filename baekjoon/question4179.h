//
// Created by tu101 on 2022-07-18.
//

#ifndef ALGORITHM_QUESTION4179_H
#define ALGORITHM_QUESTION4179_H

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

    int n, m;
    cin >> n >> m;

    char arr[n][m];
    int dis_j[n][m];
    int dis_f[n][m];

    queue<pair<int, int>> Q_J;
    queue<pair<int, int>> Q_F;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char c;
            cin >> c;
            arr[i][j] = c;

            if(c == '#') {
                dis_j[i][j] = -2;
                dis_f[i][j] = -2;
            } else if (c == '.') {
                dis_f[i][j] = -1;
                dis_j[i][j] = -1;
            } else if (c == 'F') {
                Q_F.push({i,j});
                dis_f[i][j] = 0;
            } else if (c == 'J') {
                Q_J.push({i, j});
                dis_j[i][j] = 0;
            }
        }
    }

    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};

    while(Q_F.empty() == false) {
        pair<int, int> current = Q_F.front();
        Q_F.pop();
        for(int i=0; i<4; i++) {
            int x = current.first + dx[i];
            int y = current.second + dy[i];
            if(x < 0 || x >= n || y < 0 || y >= m) continue;
            if(arr[x][y] == '#') continue;
            if(dis_f[x][y] != -1) continue;
            dis_f[x][y] = dis_f[current.first][current.second] + 1;
            Q_F.push({x, y});
        }
    }

    while(!Q_J.empty()) {
        pair<int, int> current = Q_J.front();
        Q_J.pop();
        for(int i=0; i<4; i++) {
            int x = current.first + dx[i];
            int y = current.second + dy[i];
            if(x<0 || x>=n || y<0 || y>=m) {
                cout << dis_j[current.first][current.second] + 1;
                return 0;
            }
            if(arr[x][y] != '.') continue;
            if(dis_j[x][y] != -1) continue;
            if(dis_f[x][y] != -1 && dis_j[current.first][current.second] + 1 >= dis_f[x][y]) continue;
            dis_j[x][y] = dis_j[current.first][current.second] + 1;
            Q_J.push({x, y});
        }
    }

    cout << "IMPOSSIBLE";


    return 0;
}

// TODO: 맞왜틀 : 87번 라인 dis_f[x][y] != -1 없으면 왜 틀릴까?


#endif //ALGORITHM_QUESTION4179_H
