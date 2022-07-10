//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION1475_H
#define ALGORITHM_QUESTION1475_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int arr[10];

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;

    while(n > 0) {
        arr[n%10]++;
        n /= 10;
    }


    arr[6] += arr[9];
    arr[6] = arr[6]/2 + arr[6]%2;

    int max = *max_element(arr, arr+9);


    cout << max;


    return 0;
}



#endif //ALGORITHM_QUESTION1475_H
