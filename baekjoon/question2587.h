//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION2587_H
#define ALGORITHM_QUESTION2587_H


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

    int arr[5];
    int sum = 0;
    for(int i=0; i<5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+5);

    cout << sum/5 << '\n' << arr[2];




    return 0;
}

#endif //ALGORITHM_QUESTION2587_H
