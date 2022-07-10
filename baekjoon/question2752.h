//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION2752_H
#define ALGORITHM_QUESTION2752_H

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
    sort(arr, arr+3);

    cout << arr[0] << " " << arr[1] << " " << arr[2];


    return 0;
}


#endif //ALGORITHM_QUESTION2752_H
