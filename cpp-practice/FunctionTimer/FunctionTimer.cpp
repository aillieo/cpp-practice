//
//  FunctionTimer.cpp
//  cpp-practice
//
//  Created by aillieo on 17/9/2.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#ifdef WIN32
#define __func__ __FUNCTION__ 
#endif

#include "FunctionTimer.h"
#include <iostream>

using namespace FunctionTimer;
using std::cout;
using std::endl;

AutoTimer::AutoTimer()
{
    m_str = "";
    m_start = clock();
}

AutoTimer::AutoTimer(string& str)
{
    m_str = str;
    m_start = clock();
}

AutoTimer::AutoTimer(const char* str)
{
    m_str = str;
    m_start = clock();
}

AutoTimer::~AutoTimer()
{
    clock_t end = clock();
    float dur = (double)(end - m_start)/CLOCKS_PER_SEC;
    cout << m_str << " : " << dur << "s" << endl;
}


void FunctionTimer::test()
{
    test1();
    test2();
    test3();
}

void FunctionTimer::test1()
{
    AutoTimer at(__func__);
    
    int sum = 0;
    for(int i = 0 ; i < 1000000000 ; i++)
    {
        sum++;
    }
}

void FunctionTimer::test2()
{
    AutoTimer at(__func__);
    
    int sum = 0;
    for(int i = 0 ; i < 1000000000 ; ++i)
    {
        ++sum;
    }
}

void FunctionTimer::test3()
{
    
    int sum = 0;
    int i = 0;
    
    TIMER_START;
    
    for(i = 0 ; i < 1000000000 ; ++i)
    {
        ++sum;
    }
    
    TIMER_END;
}
