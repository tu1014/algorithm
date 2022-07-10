//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION3273_H
#define ALGORITHM_QUESTION3273_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int check[2000000];
set<int> ans;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        check[arr[i]-1]++;
    }

    int target;
    cin >> target;

    int tmp;

    for(int i=0; i<n; i++) {
        tmp = target - arr[i];
        if(tmp <= 0) continue;
        if(check[tmp-1]) {
            ans.insert(tmp);
            ans.insert(arr[i]);
        }
    }

    cout << ans.size() / 2;

    // TODO: 존재 여부를 확인하는 배열을 만들었다면 먼저 확인 후 값 체크해주기?
    // https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x03/solutions/3273.cpp

    return 0;
}





#endif //ALGORITHM_QUESTION3273_H
