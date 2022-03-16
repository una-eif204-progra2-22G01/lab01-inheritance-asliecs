//
// Created by Usuario on 15/3/2022.
//

#include "Base.h"

Base::Base(string t) {
    tipo=t;
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




