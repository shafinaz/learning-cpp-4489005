// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <fstream>
#include <vector>
#include "records.h"

void initialize(StudentRecords&);
void initialize(StudentRecords&, std::ifstream&);

int main(){
    int id;
    StudentRecords SR;

    std::ifstream inFile;
    std::ofstream outFile;
    
    initialize(SR, inFile);
    //SR.report_file(outfile);
    //SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec, std::ifstream& inFile){
    inFile.open("students.txt");

    /*if (courseFile.fail() || gradeFile.fail() || studentFile.fail())
    {
        std::cout << "File is not available!" << std::endl;
    }
    else
    {
        int j = 0;
        std::string str1, str2;
        while(!studentFile.eof())
        {
            getline(studentFile[j], str);
            getline(studentFile[j+1], str2);
            srec.add_student(Student(str, str2));
            j+=2;
        }
    }*/

}

void initialize(StudentRecords& srec){
    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A'); 
    srec.add_grade(2, 2, 'A');
    srec.add_grade(2, 4, 'B');
}
