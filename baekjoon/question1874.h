//
// Created by tu101 on 2022-07-11.
//

#ifndef ALGORITHM_QUESTION1874_H
#define ALGORITHM_QUESTION1874_H


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

    int n;
    cin >> n;

    stack<int> S = {};
    int next = 1;

    list<char> ans = {};
    int num;
    for(int i=0; i<n; i++) {
        cin >> num;

        while(S.empty() || next <= num) {
            S.push(next);
            next++;
            ans.push_back('+');
        }

        if(S.top() == num) {
            S.pop();
            ans.push_back('-');
        }

        else {
            cout << "NO";
            return 0;
        }


    }

    for(auto node : ans) {
        cout << node << '\n';
    }



    return 0;
}


#endif //ALGORITHM_QUESTION1874_H
