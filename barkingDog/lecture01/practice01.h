//
// Created by 안태욱 on 2022/07/06.
//

#ifndef ALGORITHM_PRACTICE01_H
#define ALGORITHM_PRACTICE01_H

#include <iostream>
using namespace std;

int practice01(int number) {

    int sum = 0;

    for(int i=3; i<=number; i++) {
        if(i%3 == 0) {
            sum += i;
            continue;
        }
        if(i%5 == 0) sum += i;
    }

    return sum;

    // TODO: 해당 문제를 O(1)에 해결할 수 있는 방법이 존재하므로 고민해볼 것

}




#endif //ALGORITHM_PRACTICE01_H
