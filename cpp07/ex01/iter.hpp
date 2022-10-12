#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *adress, int length, void (*func)(T const &c)){
    int i = 0;
    while(i < length){
        func(adress[i]);
        i++;
    }
}

template <typename T>
void ft_print(T const &c){
    std::cout << c << std::endl;
}

#endif