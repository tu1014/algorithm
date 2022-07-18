//
// Created by tu101 on 2022-07-18.
//

#ifndef ALGORITHM_QUESTION7569_H
#define ALGORITHM_QUESTION7569_H

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
#include <tuple>
using namespace std;




int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n, h;
    cin >> m >> n >> h;

    int arr[n][m][h];
    int dis[n][m][h];

    queue<tuple<int, int, int>> Q;

    for(int k=0; k<h; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int value;
                cin >> value;
                arr[i][j][k] = value;
                if(value == 1) {
                    Q.push({i, j, k});
                    dis[i][j][k] = 0;
                } else if (value == 0) {
                    dis[i][j][k] = -1;
                } else {
                    dis[i][j][k] = -2;
                }
            }
        }
    }

    int dx[6] = {1,0,-1,0, 0, 0};
    int dy[6] = {0,1,0,-1, 0, 0};
    int dz[6] = {0, 0, 0, 0, 1, -1};

    while(!Q.empty()) {

        tuple<int, int, int> current = Q.front();
        Q.pop();

        for(int i=0; i<6; i++) {
            int x = get<0>(current)+dx[i];
            int y = get<1>(current)+dy[i];
            int z = get<2>(current)+dz[i];
            if(x < 0 || x >= n || y < 0 || y >= m || z < 0 || z >= h) continue;
            if(arr[x][y][z] == -1 || arr[x][y][z] == 1) continue;
            if(dis[x][y][z] != -1) continue;
            dis[x][y][z] = dis[get<0>(current)][get<1>(current)][get<2>(current)] + 1;
            Q.push({x, y, z});
        }
    }

    int ans = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            for(int k=0; k<h; k++) {
                int value = dis[i][j][k];
                if(value == -1) {
                    cout << -1;
                    return 0;
                }
                if(value >= 0 && value > ans) ans = value;
            }
        }
    }

    cout << ans;


    return 0;
}

// TODO: 3차원 배열에서 입력에 따라 루프를 도는 순서에 주의하자
// 위 예시에서는 h 루프를 맨 바깥쪽에서 돌았다
// TODO: BFS 거리 계산 응용

#endif //ALGORITHM_QUESTION7569_H
