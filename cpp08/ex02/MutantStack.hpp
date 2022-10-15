#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <deque>
#include <iostream>
#include <list>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T>> {
public:
    MutantStack(){};
    MutantStack(MutantStack const & mt) : std::stack<T>(mt){};
    MutantStack & operator= (MutantStack const & mt){
        this->c = mt.c;
        return *this;
    };
    ~MutantStack(){
        this->c.clear();
    };
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }
};

#endif