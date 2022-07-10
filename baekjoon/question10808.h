//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION10808_H
#define ALGORITHM_QUESTION10808_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;


int arr[26];


int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    for(char c : str) arr[c-'a']++;

    for(int i=0; i<26; i++) cout << arr[i] << " ";

    return 0;
}




#endif //ALGORITHM_QUESTION10808_H
