#include <iostream>
#include "A.h"
#include "B.h"


A::A():b(nullptr) {}
void A::setB(B* b_) { b = b_; }
void A::print() { std::cout << "print from A" << std::endl;b->print(); }
