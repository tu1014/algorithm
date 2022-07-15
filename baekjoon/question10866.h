//
// Created by tu101 on 2022-07-15.
//

#ifndef ALGORITHM_QUESTION10866_H
#define ALGORITHM_QUESTION10866_H


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
#include <deque>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    deque<int> DQ;

    string command;
    int value;

    for(int i=0; i<n; i++) {

        cin >> command;

        if(command == "push_back") {
            cin >> value;
            DQ.push_back(value);
        }

        else if (command == "push_front") {
            cin >> value;
            DQ.push_front(value);
        }

        else if (command == "pop_front") {
            if(DQ.empty()) cout << -1 << '\n';
            else {
                value = DQ.front();
                DQ.pop_front();
                cout << value << '\n';
            }
        }

        else if (command == "pop_back") {
            if(DQ.empty()) cout << -1 << '\n';
            else {
                value = DQ.back();
                DQ.pop_back();
                cout << value << '\n';
            }
        }

        else if (command == "size") cout << DQ.size() << '\n';

        else if (command == "empty") {
            if (DQ.size() == 0) cout << 1;
            else cout << 0;
            cout << '\n';
        }

        else if (command == "front") {
            if(DQ.empty()) cout << -1 << '\n';
            else {
                value = DQ.front();
                cout << value << '\n';
            }
        }

        else if (command == "back") {
            if(DQ.empty()) cout << -1 << '\n';
            else {
                value = DQ.back();
                cout << value << '\n';
            }
        }

    }


    return 0;
}


#endif //ALGORITHM_QUESTION10866_H
