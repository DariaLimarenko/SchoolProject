#include <iostream>
#include <clocale>
#include <iomanip>
#include "School.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << fixed << setprecision(2);

    Teacher t1("Иванова Мария Петровна", 40, "Математика");
    Teacher t2("Сидоров Алексей Викторович", 35, "Информатика");

    Student s1("Петров Иван", 15, 101);
    Student s2("Смирнова Анна", 16, 102);
    Student s3("Козлов Максим", 15, 103);

    s1.setClassTeacher(&t1);
    s2.setClassTeacher(&t1);
    s3.setClassTeacher(&t2);

    s1.addGrade(5);
    s1.addGrade(4);
    s1.addGrade(5);

    s2.addGrade(3);
    s2.addGrade(2);
    s2.addGrade(4);

    s3.addGrade(5);
    s3.addGrade(5);
    s3.addGrade(4);

    School school("Средняя школа №1");

    school.addTeacher(&t1);
    school.addTeacher(&t2);

    school.addStudent(&s1);
    school.addStudent(&s2);
    school.addStudent(&s3);

    school.showAllTeachers();
    school.showAllStudents();

    cout << "\n--- Дневники учеников ---" << endl;
    s1.showDiary();
    s2.showDiary();
    s3.showDiary();

    school.showExcellentStudents();

    return 0;
}
