//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION1406_H
#define ALGORITHM_QUESTION1406_H


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

    list<char> myList;
    string str;
    cin >> str;
    for(auto c : str) myList.push_back(c);

    int n;
    cin >> n;

    auto cursor = myList.end();

    char command;
    for(int i = 0; i<n; i++) {
        cin >> command;
        if(command == 'L' && cursor != myList.begin()) {
            cursor--;
        }

        else if (command == 'D' && cursor != myList.end()) {
            cursor++;
        }

        else if (command == 'B' && cursor != myList.begin()) {
            cursor--;
            cursor = myList.erase(cursor);
        }

        else if (command == 'P') {
            char tmp;
            cin >> tmp;
            myList.insert(cursor, tmp);
        }

    }

    for(auto node : myList) cout << node;

    return 0;
}



#endif //ALGORITHM_QUESTION1406_H
