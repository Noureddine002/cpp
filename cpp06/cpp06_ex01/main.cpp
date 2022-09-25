#include <iostream>
#include <string>

struct Data {
    int x, y;
};

uintptr_t serialize(Data *ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(void){
    Data d = {5,6};
    uintptr_t p = serialize(&d);
    std::cout << "value of p : " << p << std::endl;
    std::cout << "value of the adress of p : " << &p << std::endl;
    Data *ptr_d = deserialize(p);
    std::cout << "adress of ptr : " << ptr_d << std::endl;
    std::cout << "adress of d : " << &d << std::endl;
    std::cout << "value of x after deserialization : " << ptr_d->x << std::endl;
    std::cout << "value of y after deserialization : " << ptr_d->y << std::endl;
    return (0);
}