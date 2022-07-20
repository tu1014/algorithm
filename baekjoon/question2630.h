//
// Created by tu101 on 2022-07-20.
//

#ifndef ALGORITHM_QUESTION2630_H
#define ALGORITHM_QUESTION2630_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>
#include <utility>
#include <queue>
#include <tuple>
using namespace std;

int n;
int arr[128][128];
int ans[2];

bool isSame(int x, int y, int size) {
    int val = arr[x][y];

    for(int i=x; i<x+size; i++)
    for(int j=y; j<y+size; j++) {
        if(val != arr[i][j]) return false;
    }
    return true;
}

void func(int x, int y, int size) {

    if(isSame(x, y, size)) {
        ans[arr[x][y]]++;
        return;
    }

    int ss = size/2;
    func(x, y, ss);
    func(x, y+ss, ss);
    func(x+ss, y, ss);
    func(x+ss, y+ss, ss);

}

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++) {
        cin >> arr[i][j];
    }

    func(0, 0, n);

    cout << ans[0] << '\n' << ans[1];


    return 0;
}


#endif //ALGORITHM_QUESTION2630_H
