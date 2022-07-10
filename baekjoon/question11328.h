//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION11328_H
#define ALGORITHM_QUESTION11328_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int str1[26];
int str2[26];



int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string str;
    for(int i=0; i<n; i++) {

        for(int i=0; i<26; i++) {
            str1[i] = 0;
            str2[i] = 0;
        }


        cin >> str;
        for(char c : str) str1[c - 'a']++;

        cin >> str;
        for(char c : str) str2[c - 'a']++;

        bool flag = true;

        for(int i=0; i<26; i++) {
            if(str1[i] != str2[i]) {
                flag = false;
                break;
            }
        }

        if(flag) cout << "Possible\n";
        else cout << "Impossible\n";


    }

    // TODO: 두 배열이 같은지 확인할 때 메모리 절약하기
    // 위의 경우는 배열을 두 개 만드는 것이 아니라, 두 번째 문자열을 확인할 때 첫 배열의 원소를 감소시키고
    // 나중에는 0이외의 원소가 있는지 확인하여 동일한 기능을 수행할 수 있다

    return 0;
}




#endif //ALGORITHM_QUESTION11328_H
