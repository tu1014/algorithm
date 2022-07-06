//
// Created by 안태욱 on 2022/07/06.
//

#ifndef ALGORITHM_PRACTICE03_H
#define ALGORITHM_PRACTICE03_H

#include <iostream>
using namespace std;

int practice03(int n) {

    int flag = n/2;

    for(int i=2; i<=n; i++) {
        if(i*i == n) return 1;
    }

    return 0;

    // TODO: 모범 답안
    /*

     for(int i=1; i*i <= n; i++)
        if(i*i == n) return 1;

     return 0;

     위 방식의 시간 복잡도는 루트 N

     */


}

#endif //ALGORITHM_PRACTICE03_H
