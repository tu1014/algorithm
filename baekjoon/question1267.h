//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION1267_H
#define ALGORITHM_QUESTION1267_H

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

    int arr[count];
    for(int i=0; i<count; i++) cin >> arr[i];

    int Y = 0, M = 0;

    for(int i=0; i<count; i++) {
        int tmp = arr[i];
        Y += (tmp/30+1)*10;
    }

    for(int i=0; i<count; i++) {
        int tmp = arr[i];
        M += (tmp/60+1)*15;
    }

    if(Y > M) cout << "M " << M;
    else if (Y == M) cout << "Y M " << Y;
    else cout << "Y " << Y;

    return 0;
}

// TODO: 문제 정확히 이해하기



#endif //ALGORITHM_QUESTION1267_H
