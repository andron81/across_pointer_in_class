#include <iostream>
#include "A.h"
#include "B.h"

B::B(A* a_): a(a_) {}
void B::print(){ std::cout << "print from B" << std::endl;a->print(); }
