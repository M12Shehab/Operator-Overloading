// 
//
//  Lab session 9
//
//  Created by Mohammed Shehab on 3/24/20.
//  Copyright © 2020 Mohammed Shehab. All rights reserved.
//
#include "Set.h"
#include <iostream>
using namespace std;

int main()
{
    int a[] = { 1,2,3 };
    int b[] = { 3,4,5 };
    int lengthOfA = sizeof(a) / sizeof(a[0]);
    Set s1 = Set(a, lengthOfA);

    int lengthOfB = sizeof(b) / sizeof(b[0]);
    Set s2 = Set(b, lengthOfB);

    Set s_intersection = s1 & s2;
    cout << s_intersection;
    return 0;
}
