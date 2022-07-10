//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION10807_H
#define ALGORITHM_QUESTION10807_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int arr[201];


int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    cin >> n;

    int tmp;

    for(int i=0; i<n; i++) {
        cin >> tmp;
        arr[tmp+100]++;
    }

    cin >> tmp;
    cout << arr[tmp+100];

    return 0;
}


#endif //ALGORITHM_QUESTION10807_H
