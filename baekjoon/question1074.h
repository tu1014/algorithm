//
// Created by tu101 on 2022-07-19.
//

#ifndef ALGORITHM_QUESTION1074_H
#define ALGORITHM_QUESTION1074_H

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


int func(int n, int r, int c) {
    if(n == 1) {
        if(r == 0 && c == 0) return 0;
        if(r == 0 && c == 1) return 1;
        if(r == 1 && c == 0) return 2;
        else return 3;
    }

    int half = 1 << n-1;

    if(r < half && c < half) return func(n-1, r, c);
    if(r < half && c >= half) return half*half + func(n-1, r, c-half);
    if(r >= half && c < half) return 2 * half*half + func(n-1, r-half, c);
    return 3 * half*half + func(n-1, r-half, c-half);

}

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, c;
    cin >> n >> r >> c;

    cout << func(n, r, c);


    return 0;
}



#endif //ALGORITHM_QUESTION1074_H
