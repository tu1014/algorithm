//
// Created by tu101 on 2022-07-11.
//

#ifndef ALGORITHM_QUESTION2493_H
#define ALGORITHM_QUESTION2493_H

#define HEIGHT first
#define INDEX second



#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <list>
#include <utility>
#include <functional>
#include <algorithm>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<pair<int, int>> S;
    S.push({100000001, 0});

    int value;
    for(int i=0; i<n; i++) {
        cin >> value;

        while(S.top().HEIGHT < value) {
            S.pop();
        }

        cout << S.top().INDEX << " ";

        S.push({value, i+1});
    }


    return 0;
}
// TODO: 해답을 보고 푼 문제
// 처음엔 벡터로 접근하였으나 시간 초과 오류가 발생하였음

#endif //ALGORITHM_QUESTION2493_H
