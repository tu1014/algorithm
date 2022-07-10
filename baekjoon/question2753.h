//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION2753_H
#define ALGORITHM_QUESTION2753_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int year;

    cin >> year;

    if(year%4 == 0 && year%100 != 0) cout << 1;
    else if(year%4 == 0 && year%400 == 0) cout << 1;
    else cout << 0;


    return 0;

    // TODO: 윤년 구하는 공식
}


#endif //ALGORITHM_QUESTION2753_H
