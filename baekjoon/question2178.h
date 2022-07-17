//
// Created by 안태욱 on 2022/07/17.
//

#ifndef ALGORITHM_QUESTION2178_H
#define ALGORITHM_QUESTION2178_H



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

    int N, M;
    cin >> N >> M;

    int arr[N][M];
    int distance[N][M];
    string line;
    for(int i=0; i<N; i++) {
        cin >> line;
        int j=0;
        for(char c : line) {
            arr[i][j] = c - '0';
            distance[i][j] = -1;
            j++;
        }
    }

    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int, int>> Q;

    distance[0][0] = 1;
    Q.push({0, 0});

    while(Q.empty() == false) {

        pair<int, int> current = Q.front();
        int a = current.first;
        int b = current.second;
        Q.pop();

        for(int i=0; i<4; i++) {
            int x = a + dx[i];
            int y = b + dy[i];
            if(x < 0 || x >= N || y < 0 || y >= M) continue;
            if(arr[x][y] != 1) continue;
            if(distance[x][y] == -1) {
                distance[x][y] = distance[a][b] + 1;
                Q.push({x, y});
                continue;
            }
            if(distance[x][y] > distance[a][b]+1) {
                distance[x][y] = distance[a][b] + 1;
                Q.push({x, y});
                continue;
            }

        }

    }

    cout << distance[N-1][M-1];

    // TODO: BFS에서 큐에 들어가는 순서는 거리 순이기 때문에 최단거리 체크를 할 필요 없다
    return 0;
}


#endif //ALGORITHM_QUESTION2178_H
