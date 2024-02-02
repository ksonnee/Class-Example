#include <iostream>
#include <string>
#include "Student.h"

int main() {
    // Create a Student object
    Student student("John Smith", 12345);

    // Set attributes
    student.setName("Jane Doe");
    student.setId(67890);

    //classes with grades and semesters
    student.addClass("Math", 'A', "Spring 2023");
    student.addClass("Physics", 'B', "Fall 2023");
    student.addClass("History", 'A', "Summer 2024");
    student.addClass("Chemistry", 'C', "Spring 2024");

    //Calculate GPA
    student.calculateGPA();

    // Display all attributes
    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student ID: " << student.getId() << std::endl;
    std::cout << "GPA: " << student.getGPA() << std::endl;

    // Find and display classes with a user-requested grade
    char targetGrade;
    std::cout << "Enter the grade to find classes: ";
    std::cin >> targetGrade;

    student.findClassesByGrade(targetGrade);

    return 0;
}