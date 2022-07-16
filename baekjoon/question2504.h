//
// Created by 안태욱 on 2022/07/16.
//

#ifndef ALGORITHM_QUESTION2504_H
#define ALGORITHM_QUESTION2504_H


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

    string line;
    cin >> line;

    stack<pair<char, int>> S;

    int ans = 0;
    bool isCorrect = true;
    for(char c : line) {
        if(c == '(' || c == '[') S.push({c, 0});
        else {
            if(S.empty()) {
                isCorrect = false;
                break;
            }

            if(S.top().first == '(' && c == ')') {
                pair<char, int> tmp = S.top();
                S.pop();
                int value;
                if (tmp.second == 0) value = 2;
                else value = 2 * tmp.second;

                if(S.empty()) ans += value;
                else S.top().second += value;

            }

            else if(S.top().first == '[' && c == ']') {
                pair<char, int> tmp = S.top();
                S.pop();
                int value;
                if (tmp.second == 0) value = 3;
                else value = 3 * tmp.second;

                if(S.empty()) ans += value;
                else S.top().second += value;
            }

            else {
                isCorrect = false;
                break;
            }
        }
    }

    if(S.empty() == false) isCorrect = false;

    if(isCorrect) cout << ans;
    else cout << 0;

    return 0;
}



#endif //ALGORITHM_QUESTION2504_H
