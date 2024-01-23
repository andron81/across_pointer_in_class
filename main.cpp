#include <iostream>
#include "A.h"
#include "B.h"

int main() {
    A a;
    B b(&a);
    a.setB(&b);
    a.print();
    std::cout << std::endl;
    b.print();
}
