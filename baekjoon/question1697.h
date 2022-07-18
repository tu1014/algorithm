//
// Created by tu101 on 2022-07-18.
//

#ifndef ALGORITHM_QUESTION1697_H
#define ALGORITHM_QUESTION1697_H

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

int n = 100000;
int arr[100001];

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int start, target;
    cin >> start >> target;

    for(int i=0; i<=100000; i++) arr[i] = -1;

    queue<int> Q;
    Q.push(start);
    arr[start] = 0;

    while(!Q.empty()) {
        int current = Q.front();
        Q.pop();
        int tmp[3];
        tmp[0] = current+1;
        tmp[1] = current-1;
        tmp[2] = current * 2;
        for(int i=0; i<3; i++) {
            int x = tmp[i];
            if(x < 0 || x > n) continue;
            if(arr[x] != -1) continue;
            arr[x] = arr[current]+1;
            Q.push(x);
        }
    }

    cout << arr[target];

    return 0;

    // TODO: pair로 구현시에는 메모리 초과가 발생했는데, 이미 방문했던 지점에 대한 처리가 없기에
    // 큐에 너무 많은 인덱스가 들어가서 메모리 초과가 발생한 것으로 보인다.
    // TODO: 문제에서 값의 범위가 주어졌을 때 계산하는 도중에는 범위를 넘어가도 괜찮을 수 있다.
    // 따라서 문제를 잘 읽고 논리적으로 생각하자

}
#endif //ALGORITHM_QUESTION1697_H
