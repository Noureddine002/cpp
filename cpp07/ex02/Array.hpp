#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array {
private:
    T *tab;
    unsigned int siz;
public:
    Array() : tab(nullptr), siz(0){};
    Array(unsigned int n){
        this->siz = n;
        if(n < 1)
            tab = nullptr;
        else
            tab = new T[n];
    };
    ~Array(){
        delete [] tab;
    };
    Array(const Array &ar){
        *this = ar;
    };
    Array &operator= (Array const &ar){
        this->siz = ar.siz;
        this->tab = new T[ar.siz];
        unsigned int i = 0;
        while(i < siz){
            this->tab[i] = ar.tab[i];
            i++;
        }
        return (*this);
    };
    T &operator[](int i){
        if(i > -1 && i < (int)this->siz)
            return this->tab[i];
        else
            throw outofrangeException();
    };
    class outofrangeException : public std::exception
    {
        const char *what() const throw(){
            return "OUT OF RANGE ERROR !";
        }
    };
    unsigned int size() const{
        return this->size;
    }
};

#endif