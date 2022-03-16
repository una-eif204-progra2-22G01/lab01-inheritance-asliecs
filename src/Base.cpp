//
// Created by Usuario on 15/3/2022.
//

#include "Base.h"

Base::Base() {
    tipo=" ";
}

Base::~Base() {

}

void Base::doSomething() {
    cout<<"Base!!!"<<endl;
}

void Base::setTipo(string t) {
    tipo=t;
}

string Base::getTipo() {
    return tipo;
}

string Base::toString() {
    stringstream s;
    s<<"Tipo: "<<getTipo()<<endl;
    return s.str();
}


