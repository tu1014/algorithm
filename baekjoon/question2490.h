//
// Created by 안태욱 on 2022/07/09.
//

#ifndef ALGORITHM_QUESTION2490_H
#define ALGORITHM_QUESTION2490_H

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

    for(int a = 0; a<3; a++) {
        int arr[4];
        for(int i=0; i<4; i++) cin >> arr[i];

        int count = 0;
        for(int i=0; i<4; i++) if(arr[i] == 0) count++;

        if(count == 0) cout << "E\n";
        else if (count == 1) cout << "A\n";
        else if (count == 2) cout << "B\n";
        else if (count == 3) cout << "C\n";
        else if (count == 4) cout << "D\n";


    }

    return 0;

    // TODO: 배열을 통해 if else 줄이기
    /*
     string res = "EABCD";
     cout << res[count] << '\n';
    */

}


#endif //ALGORITHM_QUESTION2490_H
