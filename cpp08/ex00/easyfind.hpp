#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
bool easyFind(T stl_cont, int to_find){
   if(std::find(stl_cont.begin(), stl_cont.end(), to_find) != stl_cont.end())
        return true;
    return false;
}

#endif