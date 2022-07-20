//
// Created by tu101 on 2022-07-19.
//

#ifndef ALGORITHM_QUESTION11729_H
#define ALGORITHM_QUESTION11729_H


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

// a에서 b로 n개의 원판을 이동
void move(int a, int b, int n) {
    if(n == 1) {
        cout << a << " " << b << "\n";
        return;
    }

    move(a, 6-a-b, n-1);
    cout << a << " " << b << "\n";
    move(6-a-b, b, n-1);
}



int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int res=1;
    for(int i=0; i<n; i++) res*=2;
    cout << res-1 << '\n';
    move(1, 3, n);


    return 0;
}
#endif //ALGORITHM_QUESTION11729_H
