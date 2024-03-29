//
//  main.cpp
//  C++ Primer Plus(第6版)中文版
//
//  Created by 陆敏 on 2019/6/13.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // 声明简单的变量
    int    i;
    double d;
    
    // 声明引用变量
    int&    r = i;
    double& s = d;
    
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;
    
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
    
    return 0;
}
