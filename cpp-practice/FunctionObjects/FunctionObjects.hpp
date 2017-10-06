//
//  FunctionObjects.hpp
//  cpp-practice
//
//  Created by aillieo on 17/10/6.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#ifndef FunctionObjects_hpp
#define FunctionObjects_hpp

namespace FunctionObjects
{
    
    class ClassMemberFunc
    {
    public:
        static int staticAdd(int a, int b);
        int instanceAdd(int a, int b);
    };
    
    class ClassFunctor
    {
    public:
        int operator()(int a, int b);
    };
    
    
    void test();
    

}


#endif /* FunctionObjects_hpp */
