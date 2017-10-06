//
//  FunctionObjects.cpp
//  cpp-practice
//
//  Created by aillieo on 17/10/6.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#include "FunctionObjects.hpp"
#include <iostream>
#include <map>
#include <functional>


using namespace FunctionObjects;

int ClassMemberFunc::staticAdd(int a, int b)
{
    std::cout << "static member func" << std::endl;
    return a + b;
}

int ClassMemberFunc::instanceAdd(int a, int b)
{
    std::cout << "instance member func" << std::endl;
    return a + b;
}

int ClassFunctor::operator()(int a, int b)
{
    std::cout << "functor" << std::endl;
    return a + b;
};

int funcAdd(int a, int b)
{
    std::cout << "function" << std::endl;
    return a + b;
}

void FunctionObjects::test()
{
    std::map<int, std::function<int(int,int)>> funcMap;

    int (*fp)(int, int) = funcAdd;
    
    auto lambdaAdd = [](int a, int b)->int{
        std::cout << "lambda" << std::endl;
        return a + b;
    };

    ClassMemberFunc cmf;
    ClassFunctor cf;
    
    auto bind = std::bind(&ClassMemberFunc::instanceAdd, cmf, std::placeholders::_1, std::placeholders::_2);
    
    funcMap[1] = funcAdd;
    funcMap[2] = fp;
    funcMap[3] = lambdaAdd;
    funcMap[4] = ClassMemberFunc::staticAdd;
    funcMap[5] = bind;
    funcMap[6] = cf;
    
    
    for(int i = 1 ; i <= 6 ; i++)
    {
        std::cout<< "index " << i << ":  ";
        funcMap[i](i,1);
    }

    
}


