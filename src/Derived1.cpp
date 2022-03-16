//
// Created by Usuario on 15/3/2022.
//.

#include "Derived1.h"

Derived1::Derived1(string t) : Base(t){

}

Derived1::~Derived1() {

}

void Derived1::doSomething() {
    cout<<"Derived 1!!!"<<endl;
}

string Derived1::toString() {
    stringstream s;
    s<<"Tipo: "<<getTipo()<<endl;
    return s.str();
}


