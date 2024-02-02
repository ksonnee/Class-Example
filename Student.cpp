#include "Student.h"
#include <iostream>

// Constructor
Student::Student(std::string studentName, int studentId) : name(studentName), id(studentId), gpa(0.0), numClasses(0) {}

// Set methods
void Student::setName(std::string studentName) {
    name = studentName;
}

void Student::setId(int studentId) {
    id = studentId;
}

void Student::addClass(std::string className, char grade, std::string semester) {
    if (numClasses < 100) {
        classes[numClasses] = className;
        grades[numClasses] = grade;
        semesters[numClasses] = semester;
        numClasses++;
    }
    else {
        std::cout << "Cannot add more classes. Maximum limit reached." << std::endl;
    }
}

// Get methods
std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

double Student::getGPA() const {
    return gpa;
}

// Calculate GPA
void Student::calculateGPA() {
    double totalPoints = 0.0;
    for (int i = 0; i < numClasses; ++i) {
        switch (grades[i]) {
        case 'A':
            totalPoints += 4.0;
            break;
        case 'B':
            totalPoints += 3.0;
            break;
        case 'C':
            totalPoints += 2.0;
            break;
        case 'D':
            totalPoints += 1.0;
            break;
            // Add more cases if needed
        }
    }

    if (numClasses > 0) {
        gpa = totalPoints / numClasses;
    }
    else {
        gpa = 0.0;
    }
}

// Find classes with a specific grade
void Student::findClassesByGrade(char targetGrade) const {
    std::cout << "Classes with grade '" << targetGrade << "':" << std::endl;
    for (int i = 0; i < numClasses; ++i) {
        if (grades[i] == targetGrade) {
            std::cout << classes[i] << " (Semester: " << semesters[i] << ")" << std::endl;
        }
    }
}
