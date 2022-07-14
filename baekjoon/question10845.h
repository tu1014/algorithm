//
// Created by tu101 on 2022-07-14.
//

#ifndef ALGORITHM_QUESTION10845_H
#define ALGORITHM_QUESTION10845_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>
#include <utility>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];
    int head = 0;
    int tail = 0;
    int size = 0;

    int value;
    string command;
    for(int i=0; i<n; i++) {
        cin >> command;
        if(command == "push") {
            cin >> value;
            arr[tail++] = value;
            size++;
        }

        else if (command == "pop") {
            if (size == 0) cout << -1 << '\n';
            else {
                cout << arr[head++] << '\n';
                size--;
            }
        }

        else if (command == "size") cout << size << '\n';

        else if (command == "empty") cout << (size == 0) << '\n';

        else if (command == "front") {
            if (size == 0) cout << -1 << '\n';
            else cout << arr[head] << '\n';
        }

        else if (command == "back") {
            if (size == 0) cout << -1 << '\n';
            else cout << arr[tail-1] << '\n';
        }

    }


    return 0;
}


#endif //ALGORITHM_QUESTION10845_H
