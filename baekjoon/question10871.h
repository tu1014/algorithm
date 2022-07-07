//
// Created by 안태욱 on 2022/07/07.
//

#ifndef ALGORITHM_QUESTION10871_H
#define ALGORITHM_QUESTION10871_H


#include <iostream>
using namespace std;

void question() {

    int n;
    int flag;
    int num;

    cin >> n;
    cin >> flag;

    for(int i=0; i<n; i++) {
        cin >> num;
        if(num < flag) cout << num << " ";
    }

}



#endif //ALGORITHM_QUESTION10871_H
