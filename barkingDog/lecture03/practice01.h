//
// Created by 안태욱 on 2022/07/07.
//

#ifndef ALGORITHM_PRACTICE01_H
#define ALGORITHM_PRACTICE01_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

void insert(int index, int num, int arr[], int& len) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    if(index >= len || index < 0) return;

    for(int idx = len-1; idx > index; idx--) {
        arr[idx] = arr[idx-1];
    }

    arr[index] = num;

}

void erase(int index, int arr[], int& len) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    if(index >= len || index < 0) return;

    for(int idx=index; idx < len-1; idx++) {
        arr[idx] = arr[idx+1];
    }

}

void print(int arr[], int& len) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<len; i++) cout << arr[i] << " ";
    cout << '\n';

}



#endif //ALGORITHM_PRACTICE01_H
