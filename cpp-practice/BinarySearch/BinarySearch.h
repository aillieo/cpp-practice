//
//  BinarySearch.hpp
//  cpp-practice
//
//  Created by aillieo on 17/10/13.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#pragma once
#include <vector>

namespace BinarySearch
{
    void test();


	template <typename T>
	bool binarySearch(const std::vector<T> &vec , const T& sought);
}
