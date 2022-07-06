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
}


#endif //ALGORITHM_PRACTICE02_H
