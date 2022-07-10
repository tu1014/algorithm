//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION1158_H
#define ALGORITHM_QUESTION1158_H


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

    int n, k;
    cin >> n >> k;

    list<int> L = {};

    for(int i=0; i<n; i++) {
        L.push_back(i+1);
    }

    auto p = L.begin();

    cout << "<";
    while(L.size() > 0) {
        for(int i=1; i<k; i++) {
            p++;
            if(p == L.end()) p++;
        }
        cout << *p;
        p = L.erase(p);
        if(L.size() != 0)
            cout << ", ";
    }
    cout << ">";

    // TODO: 도전했으나 풀지 못한 문제

    return 0;
}


#endif //ALGORITHM_QUESTION1158_H
