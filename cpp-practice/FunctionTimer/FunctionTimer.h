//
//  FunctionTimer.h
//  cpp-practice
//
//  Created by aillieo on 17/9/2.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#pragma once

#include <string>
#include <time.h>

using std::string;

class AutoTimer
{
    
public:
    
    AutoTimer(string& str);
    AutoTimer(const char* str);
    AutoTimer();
    ~AutoTimer();
    
private:
    
    clock_t m_start;
    string m_str;
};

#define TIMER_START \
{\
clock_t ____TIMER_START_TIME;\
____TIMER_START_TIME=clock();
#define TIMER_END \
{ \
clock_t ____TIMER_END_TIME = clock();\
float dur = (double)(____TIMER_END_TIME - ____TIMER_START_TIME)/CLOCKS_PER_SEC; \
std::cout << "USE TIME : " << dur << "s" << std::endl; \
} \
}

namespace FunctionTimer
{
    void test();
    
    void test1();
    void test2();
    void test3();
}
