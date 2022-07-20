//
// Created by tu101 on 2022-07-20.
//

#ifndef ALGORITHM_QUESTION1992_H
#define ALGORITHM_QUESTION1992_H


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

char arr[64][64];
int n;

bool check(int x, int y, int size) {
    char c = arr[x][y];
    for(int i=x; i<x+size; i++)
    for(int j=y; j<y+size; j++) {
        char tmp = arr[i][j];
        if(c != tmp) return false;
    }
    return true;
}

void func(int x, int y, int size) {
    if(check(x, y, size)) {
        cout << arr[x][y];
    }

    else {
        int ss = size/2;
        cout << '(';
        func(x, y, ss);
        func(x, y+ss, ss);
        func(x+ss, y, ss);
        func(x+ss, y+ss, ss);
        cout << ')';
    }

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


    return 0;
}



#endif //ALGORITHM_QUESTION1992_H
