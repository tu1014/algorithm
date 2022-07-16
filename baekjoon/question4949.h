//
// Created by 안태욱 on 2022/07/16.
//

#ifndef ALGORITHM_QUESTION4949_H
#define ALGORITHM_QUESTION4949_H

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
    while(true) {
        stack<char> S;
        getline(cin, line);
        if(line == ".") break;

        for(char c : line) {
            if(c == '(' || c == '[') S.push(c);

            else if (c == ')' || c == ']') {
                if(S.empty()) {
                    cout << "no\n";
                    break;
                }
                else if (S.top() == '(' && c == ')') S.pop();
                else if (S.top() == '[' && c == ']') S.pop();

                else {
                    cout << "no\n";
                    break;
                }
            }

            else if (c == '.') {
                if(S.empty() == false) {
                    cout << "no\n";
                    break;
                }
                else {
                    cout << "yes\n";
                    break;
                }
            }
        }

    }

    return 0;

    // TODO: cin.ignore() 하지 않아도 잘 동작하는 이유가 뭘까?

}


#endif //ALGORITHM_QUESTION4949_H
