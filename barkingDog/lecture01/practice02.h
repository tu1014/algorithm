//
// Created by 안태욱 on 2022/07/06.
//

#ifndef ALGORITHM_PRACTICE02_H
#define ALGORITHM_PRACTICE02_H

#include <iostream>
using namespace std;

int practice02(int arr[], int n) {

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {

            int sum = arr[i] + arr[j];
            if(sum == 100) return 1;

        }
    }

    return 0;

    // TODO: O(N)로 해결할 방법을 생각해 볼 것
    // 문자열의 알파벳을 카운트하는 것 처럼 1-100까지의 배열을 생성하여 값의 존재 여부를 기록
    // 이후 더해서 100이되는 수에 해당하는 인덱스만을 확인하여 시간을 단축할 수 있음
}


#endif //ALGORITHM_PRACTICE02_H
