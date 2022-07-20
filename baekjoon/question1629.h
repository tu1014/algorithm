//
// Created by tu101 on 2022-07-19.
//

#ifndef ALGORITHM_QUESTION1629_H
#define ALGORITHM_QUESTION1629_H


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

long long func(long long a, long long b, long long c) {
    if (b==1) return a % c;
    long long value = func(a, b/2, c);
    value = value * value % c;
    if(b%2 == 0) return value;
    return value * a % c;
}


int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;

    cout << func(a, b, c);


    return 0;
}

// TODO: 수학적 이해 필요


#endif //ALGORITHM_QUESTION1629_H
