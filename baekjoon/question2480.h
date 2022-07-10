//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION2480_H
#define ALGORITHM_QUESTION2480_H

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

    int arr[3];

    cin >> arr[0] >> arr[1] >> arr[2];

    int result = 0;

    if(arr[0] == arr[1] && arr[1] == arr[2]) {
        result += 10000;
        result += arr[0]*1000;
    }

    else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
        result += 1000;
        int tmp;
        if(arr[0] == arr[1]) tmp = arr[0];
        else tmp = arr[2];
        result += tmp*100;
    }

    else {
        int max = *max_element(arr, arr+3);
        result += max*100;
    }

    cout << result;

    return 0;
}


#endif //ALGORITHM_QUESTION2480_H
