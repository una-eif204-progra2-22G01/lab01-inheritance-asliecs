//
// Created by Usuario on 15/3/2022.
//.
#include"Base.h"
#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H


class Derived1: public Base{
public:
    Derived1(string);
    ~Derived1();
    void doSomething() override;
    string toString();

};


#endif //LAB01_INHERITANCE_DERIVED1_H
