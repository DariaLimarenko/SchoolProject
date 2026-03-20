#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Diary.h"

class Teacher;

class Student : public Person {
private:
    int studentId;
    Diary diary;
    Teacher* classTeacher;

public:
    Student(string n, int a, int id);

    void setClassTeacher(Teacher* teacher);

    void addGrade(int grade);
    double getAverageGrade() const;

    void showDiary() const;
    void showInfo() const override;
};

#endif
