//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION2576_H
#define ALGORITHM_QUESTION2576_H

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

    int arr[7];
    int min = 100;
    int sum = 0;

    for(int i=0; i<7; i++) {
        cin >> arr[i];
        if(arr[i]%2 != 0) {
            sum += arr[i];
            if(min >= arr[i]) min = arr[i];
        }
    }

    if(sum == 0) cout << -1;
    else cout << sum << '\n' << min;


    return 0;
}

#endif //ALGORITHM_QUESTION2576_H
