//
// Created by 안태욱 on 2022/07/17.
//

#ifndef ALGORITHM_QUESTION1926_H
#define ALGORITHM_QUESTION1926_H


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

    int arr[n][m];
    int visited[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
            visited[i][j] = 0;
        }
    }

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};

    int count = 0;
    int maxSize = 0;

    for(int a=0; a<n; a++) {
        for(int b=0; b<m; b++) {
            if(visited[a][b] == 0 && arr[a][b] == 1) {

                queue<pair<int, int>> Q;
                visited[a][b] = 1;
                Q.push({a, b});

                int size = 0;

                while(Q.empty() == false) {
                    pair<int, int> current = Q.front();
                    Q.pop();
                    size++;
                    for(int i=0; i<4; i++) {
                        int x = current.first + dx[i];
                        int y = current.second + dy[i];
                        if(x < 0 || x >= n || y < 0 || y >= m) continue;
                        if(visited[x][y] || arr[x][y] != 1) continue;
                        visited[x][y] = 1;
                        Q.push({x, y});
                    }
                }

                count++;
                if(size > maxSize) maxSize = size;

            }
        }
    }

    cout << count << '\n' << maxSize;


    return 0;
}

// TODO: BFS 탐색 코드 익숙해지기

#endif //ALGORITHM_QUESTION1926_H
