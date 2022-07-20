//
// Created by 안태욱 on 2022/07/20.
//

#ifndef ALGORITHM_QUESTION1780_H
#define ALGORITHM_QUESTION1780_H


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
int arr[2187][2187];

int ans[3];

void func(int x, int y, int size) {

    bool isSame = true;
    int value = arr[x][y];
    for(int i=x; i<x+size; i++) {
        for(int j=y; j<y+size; j++) {
            if(value != arr[i][j]) {
                isSame = false;
                break;
            }
        }
        if(isSame == false) break;
    }

    if(isSame) {
        ans[value+1]++;
        return;
    }

    int smallSize = size/3;
    func(x, y, smallSize);
    func(x+smallSize, y, smallSize);
    func(x+2*smallSize, y, smallSize);
    func(x, y+smallSize, smallSize);
    func(x+smallSize, y+smallSize, smallSize);
    func(x+2*smallSize, y+smallSize, smallSize);
    func(x, y+2*smallSize, smallSize);
    func(x+smallSize, y+2*smallSize, smallSize);
    func(x+2*smallSize, y+2*smallSize, smallSize);

}


int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }


    func(0, 0, n);

    cout << ans[0] << '\n' << ans[1] << '\n' << ans[2];


    return 0;
}


#endif //ALGORITHM_QUESTION1780_H
