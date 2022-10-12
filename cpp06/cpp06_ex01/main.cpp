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
    std::cout << "x : " << d.x << " y : " << d.y << std::endl;
    uintptr_t p = serialize(&d);
    Data *d_new = deserialize(p);
    std::cout << "x new : " << d_new->x << " y new : " << d_new->y << std::endl;
    return (0);
}