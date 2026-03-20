#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;

Student::Student(string n, int a, int id)
    : Person(n, a), studentId(id), classTeacher(nullptr) {}

void Student::setClassTeacher(Teacher* teacher) {
    classTeacher = teacher;
}

void Student::addGrade(int grade) {
    diary.addGrade(grade);
}

double Student::getAverageGrade() const {
    return diary.calculateAverage();
}

void Student::showDiary() const {
    cout << "Дневник ученика " << name << ": ";
    diary.showGrades();
    cout << ", средний балл = " << getAverageGrade() << endl;
}

void Student::showInfo() const {
    cout << "Ученик: " << name
         << ", возраст: " << age
         << ", ID: " << studentId;

    if (classTeacher != nullptr) {
        cout << ", классный руководитель: " << classTeacher->getName();
    } else {
        cout << ", классный руководитель не назначен";
    }

    cout << endl;
}
