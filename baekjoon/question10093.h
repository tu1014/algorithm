//
// Created by 안태욱 on 2022/07/07.
//

#ifndef ALGORITHM_QUESTION10093_H
#define ALGORITHM_QUESTION10093_H

#include <iostream>
using namespace std;

int question() {

    long long a, b;
    cin >> a >> b;

    long long max, min;
    int count;

    if (a >= b) {
        max = a;
        min = b;
        count = a-b;
        // swap(a, b);
    }
    else {
        max = b;
        min = a;
        count = b-a;
    }

    if (count != 0) count--;

    cout << count << '\n';
    for(int long long i=min+1; i<max; i++) cout << i << " ";

    // TODO: 예외 상황을 꼭 고려해서 문제를 풀자
    // 문제에서 제시한 자료형의 범위 또한 꼭 확인하자


    return 0;
}


#endif //ALGORITHM_QUESTION10093_H
