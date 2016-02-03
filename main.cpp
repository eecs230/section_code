#include <iostream>
#include "Wildcat.h"

using namespace std;

//function declaration
void doWildCatStuff();


int main() {
    cout << "main()\n";

    doWildCatStuff();

    return 0;
}

void doWildCatStuff() {
    cout << "doWildCatStuff()\n";

    Wildcat w1("Willie", 3);
    cout << "w1 name: "<< w1.get_name() << endl;

    Wildcat w2("Sammy", 2);
    //cout << "name: " << w2.get_name() << "; age: " << w2.get_age() << endl;
    //cout << "name: " << w2.name;
    cout << "use of operator overloading: " << w2 << endl;

    //check '==' operator overload
    if ((w1 == w2)) {
        cout << "same wildcat\n";
    }
    else
    {
        cout << "different wildcat";
    }
}