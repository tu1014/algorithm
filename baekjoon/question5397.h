//
// Created by 안태욱 on 2022/07/10.
//

#ifndef ALGORITHM_QUESTION5397_H
#define ALGORITHM_QUESTION5397_H


#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

int question() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {

        list<char> myList;

        string str;
        cin >> str;

        auto cursor = myList.begin();

        for(auto c : str) {

            if(c == '<') {
                if(cursor != myList.begin()) cursor--;
            }

            else if (c == '>'){
                if(cursor != myList.end()) cursor++;
            }

            else if (c == '-') {
                if(cursor != myList.begin()) {
                    cursor--;
                    cursor = myList.erase(cursor);
                }
            }
            else myList.insert(cursor, c);
        }

        for(auto node : myList) cout << node;
        cout << '\n';

    }

    // TODO: 강박적으로 한 if문 안에 && 나 || 를 사용해 조건을 합치려 하지 말자
    // 오히려 if 안에 if를 중첩으로 두어 필터처럼 사용할 수 있다


    return 0;
}





#endif //ALGORITHM_QUESTION5397_H
