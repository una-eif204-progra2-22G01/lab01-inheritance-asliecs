//
// Created by Usuario on 15/3/2022.
//.
#include<iostream>
#include<sstream>
using namespace std;
#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H


class Base {
protected:
    string tipo;
public:
    Base(string);
    virtual ~Base();
    virtual void doSomething();
    void setTipo(string);
    string getTipo();
    virtual string toString()=0;
};


#endif //LAB01_INHERITANCE_BASE_H
