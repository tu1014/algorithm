//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION2577_H
#define ALGORITHM_QUESTION2577_H


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

    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int a, b, c;
    cin >> a >> b >> c;
    int result = a * b * c;

    while(result > 0) {
        int tmp = result%10;
        arr[tmp] += 1;
        result /= 10;
    }

    for(int i=0; i<10; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}



#endif //ALGORITHM_QUESTION2577_H
