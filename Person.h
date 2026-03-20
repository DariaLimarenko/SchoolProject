#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a);
    virtual void showInfo() const;
    string getName() const;
    virtual ~Person();
};

#endif
