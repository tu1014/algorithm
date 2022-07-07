//
// Created by 안태욱 on 2022/07/07.
//

#ifndef ALGORITHM_QUESTION10804_H
#define ALGORITHM_QUESTION10804_H

#include <iostream>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[20];
    for(int i=0; i<20; i++) arr[i] = i+1;

    int a, b;


    for(int i=0; i<10; i++) {

        cin >> a >> b;

        if(a == b) continue;

        /*while(a < b) {
            swap(arr[a-1], arr[b-1]);
            a++;
            b--;
        }*/

        reverse(arr+a-1, arr+b-1);

    }

    for(int i=0; i<20; i++) cout << arr[i] << " ";


    return 0;
}



#endif //ALGORITHM_QUESTION10804_H
