#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(string n, int a) : name(n), age(a) {}

void Person::showInfo() const {
    cout << "Имя: " << name << ", возраст: " << age << endl;
}

string Person::getName() const {
    return name;
}

Person::~Person() {}
