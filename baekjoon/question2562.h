//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION2562_H
#define ALGORITHM_QUESTION2562_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    int max = 0;
    int index = 0;
    for(int i=0; i<9; i++) {
        cin >> arr[i];
        if(max < arr[i]) {
            max = arr[i];
            index = i;
        }
    }

    cout << max << '\n' << index+1;

    // TODO: 몇 번째 수를 묻는 문제는 인덱스를 묻는 문제가 아님을 주의하자


    return 0;
}



#endif //ALGORITHM_QUESTION2562_H
