//
// Created by tu101 on 2022-07-11.
//

#ifndef ALGORITHM_QUESTION10773_H
#define ALGORITHM_QUESTION10773_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;

    int n;
    cin >> n;

    int value;
    int sum = 0;

    for(int i=0; i<n; i++) {

        cin >> value;

        if(value == 0) {
            int tmp = S.top();
            S.pop();
            sum -= tmp;
        }
        else {
            S.push(value);
            sum += value;
        }

    }

    cout << sum;

    return 0;
}




#endif //ALGORITHM_QUESTION10773_H
