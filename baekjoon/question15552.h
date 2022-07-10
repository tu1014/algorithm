//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION15552_H
#define ALGORITHM_QUESTION15552_H

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

    int count;
    cin >> count;

    int a, b;

    for(int i=0; i<count; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }


    return 0;
}



#endif //ALGORITHM_QUESTION15552_H
