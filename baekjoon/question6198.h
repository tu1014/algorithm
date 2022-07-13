//
// Created by tu101 on 2022-07-12.
//

#ifndef ALGORITHM_QUESTION6198_H
#define ALGORITHM_QUESTION6198_H


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
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int height;
    long long ans;
    stack<int> S = {};

    for(int i=0; i<n; i++)  {
        cin >> height;

        while(S.empty() == false && S.top() <= height) S.pop();

        ans += S.size();

        S.push(height);

    }

    cout << ans;

    return 0;

    // TODO: 답의 타입이 int로 표현 가능한지 생각하자. 애매하면 long, long long
    // TODO: 건물의 높이를 입력받을 때 마다 그 건물을 내려다 볼 수 있는 건물을 카운트하기 위해 스택을 사용



}



#endif //ALGORITHM_QUESTION6198_H
