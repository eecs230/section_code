//
// Created by Jason Brown on 2/3/16.
//

#include "Wildcat.h"
#include <iostream>

using namespace std;

//default constructor
Wildcat::Wildcat(): name("[]"), age(0) { } //default constructor

//constructor
Wildcat::Wildcat(string n, int a) {

    name = n;
    age = a;
}

//getter - name
string Wildcat::get_name() const {
    return name;
}

//getter - age
int Wildcat::get_age() const {

    return age;
}

//operator overload ==
bool operator==(Wildcat&a, Wildcat&b)
{
    bool namesEqual = (a.get_name() == b.get_name());

    return namesEqual;
}

//operator overload <<
ostream & operator<<(ostream & o, Wildcat& w)
{
    o << w.get_name() << "; age: " << w.get_age();

    return o;
}