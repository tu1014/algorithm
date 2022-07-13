//
// Created by tu101 on 2022-07-13.
//

#ifndef ALGORITHM_QUESTION17298_H
#define ALGORITHM_QUESTION17298_H

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

    int inputs[n];
    int ans[n];

    for(int i=0; i<n; i++) {
        cin >> inputs[i];
    }

    stack<int> S;
    for(int i=n-1; i>=0; i--) {
        while(S.empty() == false && S.top() <= inputs[i]) S.pop();

        if(S.empty()) ans[i] = -1;
        else ans[i] = S.top();

        S.push(inputs[i]);
    }

    for(int i=0; i<n; i++) {
        cout << ans[i] << '\n';
    }

    return 0;

    // TODO: 입력된 수를 뒤에서부터 탐색하며 스택 응용하기
}


#endif //ALGORITHM_QUESTION17298_H
