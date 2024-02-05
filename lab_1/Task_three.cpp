#include <iostream>
#include <string>
#include <cstring>

// Define the Grades class
class Grades {
public:
    int mark;
    char the_grade;

    // Member function to assign grades based on the mark
    void assignGrade(){
     if (mark > 69 && mark <= 100) {
            the_grade = 'A';
        } else if (mark > 59 && mark < 70) {
            the_grade = 'B';
        } else if (mark > 49 && mark < 60) {
            the_grade = 'C';
        } else if (mark > 39 && mark < 50) {
            the_grade = 'D';
        } else if (mark >= 0 && mark <40) {
            the_grade = 'E';
        } else {
            std::cerr << "Invalid mark: " << mark << std::endl;
            the_grade = '?'; // Indicates an undefined grade
        }
    }
};

// Define the Course class
class Course {
public:
    std::string course_name;
    int course_code;
};

// Define the Student class
class Student {
public:
    std::string name;
    int reg_number;
    int age;
    Course course;
    Grades grades;

    // Member function to print information about the student
    void printStudentInfo() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Student ID: " << reg_number<< std::endl;
        std::cout << "Course Name: " << course.course_name << std::endl;
        std::cout << "Course Code: " << course.course_code << std::endl;
        std::cout << "Mark: " << grades.mark << std::endl;
        std::cout << "Grade: " << grades.the_grade << std::endl;
        std::cout << std::endl;  // Add a space after printing each student's information
    }
};

int main() {
    Course course_1, course_2, course_3;

      //course_1 spec
      course_1.course_name = "Mathematics";
      course_1.course_code = 212;

      //course_2 spec
      course_2.course_name = "Sciences";
      course_2.course_code = 211;

      //course_3 spec
      course_3.course_name = "Economics";
      course_3.course_code = 210;



       Student student_1, student_2, student_3;

       // student_1 specification
       student_1.name = "Martin Nelson";
       student_1.reg_number = 0012022;
       student_1.age = 20;
       student_1.course =course_1;


       // student_2 specification
       student_2.name = "Leo duke";
       student_2.reg_number = 0022022;
       student_2.age = 20;
       student_2.course =course_2;

       // student_3 specification
       student_3.name = "Barrack Juma";
       student_3.reg_number = 0032022;
       student_3.age = 20;
       student_3.course =course_3;

       student_1.grades.mark = 85;
       student_1.grades.assignGrade();

       student_2.grades.mark = 64;
       student_2.grades.assignGrade();

       student_3.grades.mark = 43;
       student_3.grades.assignGrade();

       student_1.printStudentInfo();
       student_2.printStudentInfo();
       student_3.printStudentInfo();





    std::cout << std::endl << std::endl;

    return 0;
}


