//
//  BinarySearch.cpp
//  cpp-practice
//
//  Created by aillieo on 17/10/13.
//  Copyright © 2017年 AillieoTech. All rights reserved.
//

#include "BinarySearch.h"
#include <iostream>

using namespace BinarySearch;
using std::vector;

void BinarySearch::test()
{
	std::vector<int> vec;
	for(int i = 0 ; i < 10 ; i++)
	{
		vec.push_back(i);
	}
	for(int i = 30 ; i < 50 ; i+=2)
	{
		vec.push_back(i);
	}


	std::cout<< "vec = [ ";
	for(auto i : vec)
	{
		std::cout << i <<" ";
	}
	std::cout<< "]"<<std::endl;




	bool find = false;
	vector<int> testVec;
	testVec.push_back(8);
	testVec.push_back(5);
	testVec.push_back(27);
	testVec.push_back(6);
	testVec.push_back(40);
	testVec.push_back(41);
	
	for (auto i : testVec)
	{
		std::cout<< std::endl;
		std::cout<<"try searching " << i << std::endl;
		find = binarySearch(vec,i);
		if(find)
		{
			std::cout<<"found!"<< std::endl;
		}
		else
		{
			std::cout<<"not found!"<< std::endl;
		}
	}

}


template<typename T>
bool BinarySearch::binarySearch(const std::vector<T> &vec , const T& sought)
{
	auto beg = vec.cbegin(), end = vec.cend();
	auto mid = vec.cbegin() + (end - beg)/2;

	while (mid != end && *mid != sought) {
		if (sought < *mid)
			end = mid; 
		else
			beg = mid + 1;
		mid = beg + (end - beg)/2;
	}
	return mid == end;
}