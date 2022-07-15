//
// Created by tu101 on 2022-07-15.
//

#ifndef ALGORITHM_QUESTION5430_H
#define ALGORITHM_QUESTION5430_H

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

    for(int i=0; i<n; i++) {

        string command;
        cin >> command;

        int n;
        cin >> n;

        deque<int> DQ;
        char c;
        cin >> c;
        for(int i=0; i<n; i++) {
            int value;
            cin >> value;
            DQ.push_back(value);
            cin >> c;
        }
        if(n == 0) cin >> c;

        bool isHeadFront = true;
        bool isCorrect = true;

        for(char c : command) {
            if(c == 'R') {
                if(isHeadFront)isHeadFront = false;
                else isHeadFront = true;
            }
            else if (c == 'D') {
                if(DQ.empty()) {
                    isCorrect = false;
                    break;
                }
                if(isHeadFront) {
                    DQ.pop_front();
                }
                else DQ.pop_back();
            }
        }

        // print
        if(isCorrect) {
            cout << "[";
            if(isHeadFront) {
                for(int i=0; i<DQ.size(); i++) {
                    cout << DQ[i];
                    if(i != DQ.size()-1) cout << ",";
                }
            }
            else {
                for(int i=DQ.size()-1; i>=0; i--) {
                    cout << DQ[i];
                    if(i != 0) cout << ",";
                }
            }
            cout << "]\n";
        }

        else cout << "error\n";

    }


    return 0;
}

#endif //ALGORITHM_QUESTION5430_H
