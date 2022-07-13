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
            if(p == L.end()) p = L.begin();
        }
        cout << *p;
        p = L.erase(p);
        if(p == L.end()) p = L.begin();
        if(L.size() != 0)
            cout << ", ";
    }
    cout << ">";

    // TODO: STL list는 원형 이중 연결 리스트가 아니라, 이중 연결 리스트임을 주의하자
    // end()는 마지막 원소의 다음 노드를 가리킴을 주의하자

    return 0;
}


#endif //ALGORITHM_QUESTION1158_H
