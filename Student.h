#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student {
private:
    std::string name;
    int id;
    std::string classes[100];
    char grades[100];
    std::string semesters[100];
    double gpa;
    int numClasses;

public:
    // Constructor
    Student(std::string studentName, int studentId);

    // Set methods
    void setName(std::string studentName);
    void setId(int studentId);
    void addClass(std::string className, char grade, std::string semester);

    // Get methods
    std::string getName() const;
    int getId() const;
    double getGPA() const;

    // Calculate GPA
    void calculateGPA();

    // Find classes with a specific grade
    void findClassesByGrade(char targetGrade) const;
};

#endif  // STUDENT_H
