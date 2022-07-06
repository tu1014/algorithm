//
// Created by 안태욱 on 2022/07/06.
//

#ifndef ALGORITHM_PRACTICE04_H
#define ALGORITHM_PRACTICE04_H

#include <iostream>
using namespace std;


int practice04(int number) {

    for(int i = number; i>0; i--) {
        int tmp = 1;

        while(tmp << 1 <= i)
            tmp = tmp << 1;

        if(tmp == i) return tmp;

    }

    return 0;

}


#endif //ALGORITHM_PRACTICE04_H
