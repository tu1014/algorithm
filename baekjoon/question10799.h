//
// Created by 안태욱 on 2022/07/16.
//

#ifndef ALGORITHM_QUESTION10799_H
#define ALGORITHM_QUESTION10799_H

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

    string str;
    cin >> str;

    stack<char> S;
    int ans = 0;
    char pre = 'a';
    for(char c : str) {
        if(c == '(') S.push(c);
        else if (c == ')') {
            if(pre == '(') {
                // 레이저
                S.pop();
                ans += S.size();
            }
            else {
                S.pop();
                ans += 1;
            }
        }
        pre = c;
    }

    cout << ans;


    return 0;
}



#endif //ALGORITHM_QUESTION10799_H
