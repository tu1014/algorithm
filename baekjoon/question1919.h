//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION1919_H
#define ALGORITHM_QUESTION1919_H

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

    int arr[26] = {};
    int arr2[26] = {};

    string str;
    cin >> str;

    for(char c : str) arr[c-'a']++;

    cin >> str;
    for(char c : str) arr2[c-'a']++;

    int ans = 0;
    for(int i=0; i<26; i++) {
        ans += abs(arr[i]-arr2[i]);
    }

    cout << ans;

    return 0;
}


#endif //ALGORITHM_QUESTION1919_H
