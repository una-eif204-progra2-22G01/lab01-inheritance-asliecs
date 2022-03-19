//
// Created by Usuario on 15/3/2022.
//.
#include "Derived1.h"
#include "Derived2.h"

int main(int argc, const char *argv[]){
    cout<<"Welcome to the UNA"<<endl;
    cout<<"Laboratorio 1 Aslie Cardenas Sandoval"<<endl<<endl;
    Derived1 d1("Tipo 1");
    d1.doSomething();
    cout<<d1.toString()<<endl;

    Derived2 d2("Tipo 2");
    d2.doSomething();
    cout<<d2.toString()<<endl;
}

