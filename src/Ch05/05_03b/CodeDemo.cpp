// Learning C++ 
// Exercise 05_03
// Using Functions, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;

    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;
    float num_grd = 0.0f; int j = 0;
    float points = 0.0f, credits = 0.0f;
    for (Grade& grd : grades)
        if (grd.get_student_id() == id){
            // TODO: get numeric grade
            // TODO: credits += get_credits
            points += 0;
        }
    GPA = points / credits;

    // TODO: get student name
    std::cout << "The GPA for " << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
