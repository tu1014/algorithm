//
// Created by tu101 on 2022-07-20.
//

#ifndef ALGORITHM_QUESTION2447_H
#define ALGORITHM_QUESTION2447_H

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
#include <queue>
#include <tuple>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        if(i%3 != 1) for(int j=0; j<n; j++) cout << "*";
        else {

        }
        cout << "\n";
    }


    return 0;
}


#endif //ALGORITHM_QUESTION2447_H
