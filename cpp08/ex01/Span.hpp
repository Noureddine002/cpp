#ifndef SPAN_H
#define SPAN_H

#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>

class Span{
private:
    std::vector<int> v;
    unsigned int N;
    unsigned int current_index;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &s);
    Span &operator=(const Span &s);
    ~Span();
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    void print_vector();
    void generateNumbers();
    class FullVector : public std::exception{
        const char *what() const throw(){
            return ("The vector is full, you cant add more numbers !");
        }
    };
    class NoSpan : public std::exception{
        const char *what() const throw(){
            return ("No span has been found !!");
        }
    };
};

#endif