// 
//
//  Lab session 9
//
//  Created by Mohammed Shehab on 3/24/20.
//  Copyright © 2020 Mohammed Shehab. All rights reserved.
//

#include "Set.h"
#include <iostream>
#include <cassert>
using namespace std;

bool test_case_intersaction(Set& );
bool test_case_union(Set&);

int main()
{
    int a[] = { 1,2,3,5 };
    int b[] = { 3,4,5 };
    int lengthOfA = sizeof(a) / sizeof(a[0]);
    Set s1 = Set(a, lengthOfA);

    int lengthOfB = sizeof(b) / sizeof(b[0]);
    Set s2 = Set(b, lengthOfB);
    
    // Start test cases
    Set s_intersection = s1 & s2;
    cout << "+ Test 1 in progress.\n";
    assert(test_case_intersaction(s_intersection));
    Set s_union = s1 | s2;
    cout << "+ Test 2 in progress.\n";
    assert(test_case_union(s_union));
    cout << "Finish task..\n";
    cout << "I am change the code.\n";
    return 0;
}

bool test_case_intersaction(Set& s)
{
    try
    {
        if (s.size() <= 0)
        {
            cout << "- Faile test 2\n";
            return false;
        }

        int r[] = { 3,5 };
        for (int i = 0; i < s.size(); ++i)
        {
            if (r[i] != s[i])
            {
                cout << "- Faile test 1\n";
                return false;
            }
        }
    }
    catch (string msg)
    {
        cout << "- Error : "<<msg<<endl;
        cout << "- Faile test 1\n";
        return false;
    }
    cout << "+ Pass test 1\n";
    return true;
}


bool test_case_union(Set& s)
{
    try
    {
        if (s.size() <= 0)
        {
            cout << "- Faile test 2\n";
            return false;
        }

        int r[] = { 1,2,3,5,4 };
        int lengthOf_r = sizeof(r) / sizeof(r[0]);
        for (int i = 0; i < s.size(); ++i)
        {
            bool found = false;
            for (int j = 0; j < lengthOf_r; ++j)
            {
                if (r[j] == s[i])
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "- Faile test 2\n";
                return false;
            }
        }
    }
    catch (string msg)
    {
        cout << "- Error : " << msg << endl;
        cout << "- Faile test 2\n";
        return false;
    }
    cout << "+ Pass test 2\n";
    return true;
}