//
// Created by tu101 on 2022-07-15.
//

#ifndef ALGORITHM_QUESTION1021_H
#define ALGORITHM_QUESTION1021_H

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
    int count;
    cin >> n >> count;

    deque<int> DQ;

    for(int i=0; i<n; i++) {
        DQ.push_back(i+1);
    }

    int value;
    int ans = 0;
    for(int i=0; i<count; i++) {
        cin >> value;

        int target_index = find(DQ.begin(), DQ.end(), value) - DQ.begin();
        while(DQ.front() != value) {
            if(target_index <= (int)DQ.size()/2) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }
        DQ.pop_front();
    }

    cout << ans;

    return 0;
}

// TODO: deque 어느 쪽으로 회전시키는 것이 더 효율적인지 확인하는 조건



#endif //ALGORITHM_QUESTION1021_H
