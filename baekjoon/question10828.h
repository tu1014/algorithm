//
// Created by tu101 on 2022-07-11.
//

#ifndef ALGORITHM_QUESTION10828_H
#define ALGORITHM_QUESTION10828_H

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

    string command;
    int value;

    stack<int> S;

    for(int i=0; i<n; i++) {
        cin >> command;

        if(command == "push") {
            cin >> value;
            S.push(value);
        }

        else if (command == "pop") {
            if(S.size() == 0) cout << -1;
            else {
                value = S.top();
                S.pop();
                cout << value;
            }
            cout << '\n';
        }

        else if (command == "size") cout << S.size() << '\n';

        else if (command == "empty") cout << S.empty() << '\n';

        else if (command == "top") {
            if(S.size() == 0) cout << -1;
            else {
                cout << S.top();
            }
            cout << '\n';
        }

    }



    return 0;
}


#endif //ALGORITHM_QUESTION10828_H
