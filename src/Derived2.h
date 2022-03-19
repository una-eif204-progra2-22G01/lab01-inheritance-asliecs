//
// Created by Usuario on 15/3/2022.
//.
#include "Base.h"
#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H


class Derived2:public Base {

public:
    Derived2(string);
    ~Derived2();
    void doSomething() override;
    string toString();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
