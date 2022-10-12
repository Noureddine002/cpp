#include "iter.hpp"

int main(){
    
    int t1[5] = {1,2,3,4,5};
    iter(t1, 5, ft_print);
    std::cout << "---------------------------------" << std::endl;
    char t2[5] = {'a','b','c','d','e'};
    iter(t2, 5, ft_print);
}