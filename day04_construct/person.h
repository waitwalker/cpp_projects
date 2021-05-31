#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
private:
    char *name;
    int num;
public:
    //Person();
    Person(char *na, int nu);
    ~Person();
};

#endif // PERSON_H
