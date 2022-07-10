//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION13300_H
#define ALGORITHM_QUESTION13300_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int male[6];
int female[6];


int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int g, s;

    for(int i=0; i<n; i++) {
        cin >> s >> g;
        if(s) male[g-1]++;
        else female[g-1]++;
    }

    int result = 0;
    int tmp;
    for(int i=0; i<6; i++) {

        tmp = male[i];
        result += tmp/k;
        if(tmp%k) result++;

        tmp = female[i];
        result += tmp/k;
        if(tmp%k) result++;

    }

    cout << result;



    return 0;
}




#endif //ALGORITHM_QUESTION13300_H
