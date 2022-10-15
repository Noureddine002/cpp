#include "Span.hpp"

Span::Span(){
    this->N = 0;
    this->current_index = 0;
}

Span::Span(unsigned int n){
    this->N = n;
    this->current_index = 0;
}

Span::Span(const Span &s){
    *this = s;
}

Span &Span::operator= (const Span &s){
    if(this == &s)
        return *this;
    this->v.clear();
    this->N = s.N;
    this->v.assign(s.v.begin(), s.v.end());
    return *this;
}

Span::~Span(){
    this->v.clear();
}

void Span::addNumber(int num){
    if(this->v.size() >= this->N)
        throw FullVector();
    else{
        this->v.push_back(num);
        this->current_index++;
    }
}

int Span::shortestSpan(){
    if(this->v.size() < 2)
        throw NoSpan();
    int min_span;
    int temp;
    unsigned int i = 1;
    std::vector<int> temp_v;
    temp_v = this->v;
    std::sort(temp_v.begin(), temp_v.end());
    min_span = temp_v[1] - temp_v[0];
    if(this->v.size() == 2)
        return min_span;
    else
    while(i < temp_v.size()){
        temp = temp_v.at(i) - temp_v.at(i - 1);
        if(temp < min_span)
            min_span = temp;
        i++;
    }
    temp_v.clear();
    return min_span;
}

int Span::longestSpan(){
    if(this->v.size() < 2)
        throw NoSpan();
    int max_span;
    int max;
    int min;
    max = *std::max_element(this->v.begin(), this->v.end());
    min = *std::min_element(this->v.begin(), this->v.end());
    max_span = max - min;
    return max_span;
}

void Span::print_vector(){
    unsigned int i = 0;
    while(i < this->current_index){
        std::cout << this->v[i] << " | ";
        i++;
    }
    std::cout << std::endl;
}

void Span::generateNumbers(){
    std::vector<int> temp_vec;
    if(this->current_index >= this->N)
        throw FullVector();
    while(this->current_index < this->N){
        temp_vec.push_back((rand() % this->N));
        this->current_index++;
    }
    this->v.insert(this->v.end(), temp_vec.begin(), temp_vec.end());
    temp_vec.clear();
}