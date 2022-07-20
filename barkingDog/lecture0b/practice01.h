//
// Created by tu101 on 2022-07-19.
//

#ifndef ALGORITHM_PRACTICE01_H
#define ALGORITHM_PRACTICE01_H

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

void function1(int n) {
    if(n == 0) {
        cout << n << ' ';
        return;
    }
    if(n>0) function1(n-1);
    cout << n << ' ';
}

void function2(int n) {
    cout << n << ' ';
    if(n>0) function2(n-1);
}



#endif //ALGORITHM_PRACTICE01_H
