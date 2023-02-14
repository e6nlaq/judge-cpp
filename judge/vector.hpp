
// vector.hpp / (C) Copyright 2023 e6nlaq
// This file is part of Judge.cpp and is available under the MIT license.

#ifndef __JUDGE_VECTOR__
#define __JUDGE_VECTOR__

#include <vector>
#include <iostream>
#include <string>
#include "./def.hpp"

namespace judge
{
    template <typename _Tp1>
    inline void print(const std::vector<_Tp1> v, const std::string str = " ")
    {
        rep(i, v.size())
        {
            std::cout << v[i] << str;
        }
    }

} // namespace judge

#endif