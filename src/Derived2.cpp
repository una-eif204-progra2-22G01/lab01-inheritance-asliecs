//
// Created by Usuario on 15/3/2022.
//.

#include "Derived2.h"


Derived2::Derived2(string t) : Base(t){

}

Derived2::~Derived2() {

}

void Derived2::doSomethig() {
    cout<<"Derived 2!!!"<<endl;
}

string Derived2::toString() {
    stringstream x;
    x<<"Tipo: "<<getTipo()<<endl;
    return x.str();
}
