//
//  MapAndObjects.cpp
//  cpp-practice
//
//  Created by aillieo on 17/8/6.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#include "MapAndObjects.h"
#include <iostream>
#include <map>

using namespace MapAndObjects;

Data::Data()
{
    m_str = "default";
    std::cout << "constructor: " << m_str << std::endl;
}

Data::Data(string str)
{
    m_str = str;
    std::cout << "constructor: " << m_str << std::endl;
}

Data::~Data()
{
    std::cout << "destructor: " << m_str << std::endl;
}

Data::Data(const Data& dat)
{
    m_str = dat.m_str;
    std::cout << "copy constructor: " << m_str << std::endl;
}

string Data::check(Data* dat)
{
    if(nullptr != dat)
    {
        return dat->m_str;
    }
    else
    {
        return "nullptr";
    }
}

void MapAndObjects::test()
{
    test1();
    test2();
}

void MapAndObjects::test1()
{
    std::map<int,Data> map1;
    
    std::cout << "-----------\n";
    
    Data v1 = Data("v1");
    map1[1] = v1;
    Data v2 = Data("v2");
    map1[1] = v2;
    
    std::cout << "-----------\n";
    
    {
        Data* v3 = new Data("v3");
        Data v4 = Data("v4");
        map1[3] = *v3;
        map1[4] = v4;
        delete v3;
        v3 = nullptr;
    }
    
    std::cout << "-----------\n";
    
    Data v5 = Data("v5");
    Data* v6 = new Data("v6");
    
    map1[5] = v5;
    map1[6] = *v6;
    delete v6;
    v6 = nullptr;
    
    
    std::cout << "-----------\n";
    
    
    std::cout << "map1[3] is " << Data::check(&map1[3]) << std::endl;
    
    std::cout << "map1[4] is " << Data::check(&map1[4]) << std::endl;
    
    
    Data v7 = Data("v7");
    map1[3] = v7;
    
    std::cout << "-----------\n";
    std::cout << "-----------\n";
    
    
    std::cout << "map1[3] is " << Data::check(&map1[3]) << std::endl;
    
    std::cout << "map1[4] is " << Data::check(&map1[4]) << std::endl;
    
    std::cout << "v2 is " << Data::check(&v2) << std::endl;
    
    std::cout << "-----------\n";
        
}



void MapAndObjects::test2()
{

    std::map<int,Data*> map2;

    std::cout << "-----------\n";
    
    Data* p1 = new Data("p1");
    map2[1] = p1;
    Data* p2 = new Data("p2");
    map2[1] = p2;
    
    std::cout << "-----------\n";
    
    {
        Data* p3 = new Data("p3");
        Data p4 = Data("p4");
        map2[3] = p3;
        map2[4] = &p4;
        delete p3;
        p3 = nullptr;
    }
    
    std::cout << "-----------\n";
    
    Data p5 = Data("p5");
    Data* p6 = new Data("p6");
    
    map2[5] = &p5;
    map2[6] = p6;
    delete p6;
    p6 = nullptr;
    
    
    std::cout << "-----------\n";
    
    
    std::cout << "map2[3] is " << Data::check(map2[3]) << std::endl;
    
    std::cout << "map2[4] is " << Data::check(map2[4]) << std::endl;
    
    
    Data* p7 = new Data("p7");
    map2[3] = p7;
    
    std::cout << "-----------\n";
    std::cout << "-----------\n";
    
    
    std::cout << "map2[3] is " << Data::check(map2[3]) << std::endl;
    
    std::cout << "map2[4] is " << Data::check(map2[4]) << std::endl;
    
    std::cout << "p2 is " << Data::check(p2) << std::endl;
    
    std::cout << "-----------\n";
    
    delete p1;
    p1 = nullptr;
    delete p2;
    p2 = nullptr;
    
}


