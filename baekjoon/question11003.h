//
// Created by tu101 on 2022-07-15.
//

#ifndef ALGORITHM_QUESTION11003_H
#define ALGORITHM_QUESTION11003_H


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

void insert(deque<pair<int, int>>& DQ, pair<int, int> p) {
    if (DQ.empty()) DQ.push_back(p);
    else {

        auto index = DQ.begin();
        while(index != DQ.end() && index->second <= p.second) {
            index++;
        }

        if(index == DQ.end()) DQ.push_back(p);
        else DQ.insert(index, p);

    }
}

void deleteOld(deque<pair<int, int>> &DQ, pair<int, int> p, int L) {
    while(!DQ.empty() && DQ.front().first < p.first - L + 1) DQ.pop_front();

}

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int L;
    cin >> n >> L;

    deque<pair<int, int>> DQ;

    int value;
    for(int i=0; i<n; i++) {
        cin >> value;

        insert(DQ, {i, value});

        /*for(auto c : DQ) cout << c.second << " ";
        cout << '\n';*/

        deleteOld(DQ, {i, value}, L);

        /*for(auto c : DQ) cout << c.second << " ";
        cout << '\n';*/

        int tmp = i-L+1;
        if(tmp < 0) tmp = 0;

        cout << DQ[tmp].second << " ";


    }


    return 0;
}



#endif //ALGORITHM_QUESTION11003_H
