//
//  BinarySearch.cpp
//  cpp-practice
//
//  Created by aillieo on 17/10/16.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#include "LocalStaticVariable.h"
#include <iostream>

using namespace LocalStaticVariable;

size_t count_calls();

void LocalStaticVariable::test()
{
	for (size_t i = 0; i != 10; ++i)
		std::cout << count_calls() << std::endl;
	return;
}


size_t count_calls()
{
	static size_t ctr = 0; // value will persist across calls
	return ++ctr;
}

