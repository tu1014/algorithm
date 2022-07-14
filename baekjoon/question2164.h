//
// Created by tu101 on 2022-07-14.
//

#ifndef ALGORITHM_QUESTION2164_H
#define ALGORITHM_QUESTION2164_H


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

    int n;
    cin >> n;

    queue<int> cards = {};
    for(int i=0; i<n; i++) cards.push(i+1);

    int second;
    while(cards.size() > 1) {
        cards.pop();
        second = cards.front();
        cards.pop();
        cards.push(second);
    }

    cout << cards.front();

    return 0;
}



#endif //ALGORITHM_QUESTION2164_H
