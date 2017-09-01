//
//  MapAndObjects.h
//  cpp-practice
//
//  Created by aillieo on 17/8/22.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#pragma once

#include <string>
using std::string;

namespace MapAndObjects
{
    
    class Data
    {
        
    public:
        
        Data(string str);
        Data();
        ~Data();
        Data(const Data& dat);
        
        static string check(Data* dat);
        
    private:
        
        string m_str;
        
    };
    
    void test();
    
    void test1();
    void test2();
}
