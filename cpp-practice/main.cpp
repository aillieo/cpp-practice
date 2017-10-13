//
//  main.cpp
//  cpp-practice
//
//  Created by aillieo on 17/8/6.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#include <iostream>
#include "MapAndObjects/MapAndObjects.h"
#include "FunctionTimer/FunctionTimer.h"
#include "FunctionObjects/FunctionObjects.hpp"
#include "BinarySearch/BinarySearch.h"

int main(int argc, const char * argv[]) {
    
    //MapAndObjects::test();
    //FunctionTimer::test();
    //FunctionObjects::test();
	BinarySearch::test();
    

#ifdef WIN32
	getchar();
#endif

    return 0;
}

