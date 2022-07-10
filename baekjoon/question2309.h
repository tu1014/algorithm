//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION2309_H
#define ALGORITHM_QUESTION2309_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int calculate(int arr[], int num, int i, int j) {
    int sum = 0;

    for(int index=0; index<num; index++) {
        if(index != i && index != j)
            sum += arr[index];
    }

    return sum;
}


int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    for(int i=0; i<9; i++) cin >> arr[i];
    sort(arr, arr+9);

    int result;

    for(int i=0; i<9; i++) {

        for(int j=i+1; j<9; j++) {

            result = calculate(arr, 9, i, j);
            if(result == 100) {
                for(int k=0; k<9; k++) {
                    if(k != i && k != j)
                        cout << arr[k] << "\n";
                }
            }
            if(result == 100) break;
        }
        if(result == 100) break;
    }


    return 0;
}


#endif //ALGORITHM_QUESTION2309_H
