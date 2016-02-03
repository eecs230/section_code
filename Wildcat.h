//
// Created by Jason Brown on 2/3/16.
//

#ifndef LAB_5_INCLASS_WILDCAT_H
#define LAB_5_INCLASS_WILDCAT_H

#include <string>
using  namespace std;

//class
class Wildcat {

    //member variables
    string name;
    int age;

public:
    //constructor declarations
    Wildcat();
    Wildcat(string, int);

    //getters declarations
    string get_name() const;
    int get_age() const;

};

//declaration of '==' overloading
bool operator==(Wildcat&, Wildcat&);

//declaration of '<<' overloading
ostream & operator<<(ostream&, Wildcat&);

#endif //LAB_5_INCLASS_WILDCAT_H
