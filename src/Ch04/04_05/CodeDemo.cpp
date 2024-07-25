// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id, crs_id, sum_crdts, crdts;
    char grd;
    float weight = 0.0f;

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

    // Calculate the GPA for the selected student.
    // Write your code here
    for (auto it : grades) 
    {
        if (it.get_student_id() == id) // for each grade involving the student
        {
            grd = it.get_grade(); // get grade
            crs_id = it.get_course_id(); // get course ID

            for(auto it2 : courses)
            {
                if (it2.get_id() == crs_id)
                    crdts = it2.get_credits();
            

                switch (grd)
                {
                    case 'A':
                        weight = 4;
                        break;
                    case 'B':
                        weight = 3;
                        break;
                    case 'C':
                        weight = 2;
                        break;
                    case 'D':
                        weight = 1;
                        break;
                    default:
                        weight = 0;
                        break;
                }
                GPA += weight*crdts;
                sum_crdts += crdts;
            }        
        }

        GPA /= sum_crdts;
    }

    std::string student_str;
    student_str = students[id+1].get_name(); // Change this to the selected student's name
    
    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
