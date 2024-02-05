#include <iostream>
#include <cstring>
using namespace std;

typedef struct {
   std::string course_code;
   std::string course_name;
} Course;

typedef struct {
    int mark;
    char the_grade;
    } Grades;

typedef struct {
   char  reg_number[20];
   char  name[50];
   int  age;
   Course course;
   Grades grades;


} Student;




void assignGrade(Student& student, int mark) {

       student.grades.mark = mark;
        if (mark > 69 && mark <= 100) {
            student.grades.the_grade = 'A';
        } else if (mark > 59 && mark < 70) {
            student.grades.the_grade = 'B';
        } else if (mark > 49 && mark < 60) {
            student.grades.the_grade = 'C';
        } else if (mark > 39 && mark < 50) {
            student.grades.the_grade = 'D';
        } else if (mark >= 0 && mark <40) {
            student.grades.the_grade = 'E';
        } else {
            std::cerr << "Invalid mark: " << mark << std::endl;
            student.grades.the_grade = '?'; // Indicates an undefined grade
        }
}

void printStudentInfo(const Student* student) {
    std::cout << "Student Name: " << student->name << std::endl;
    std::cout << "Student ID: " << student->reg_number << std::endl;
    std::cout << "Mark: " << student->grades.mark << std::endl;
    std::cout << "Grade: " << student->grades.the_grade << std::endl;
    std::cout << "Course: " << student->course.course_name<< std::endl;
    std::cout << "Course: " << student->course.course_code<< std::endl;
    std::cout << std::endl;
}






int main() {
      Course course_1, course_2, course_3;

      //course_1 spec
      course_1.course_name = "Mathematics";
      course_1.course_code = "212";

      //course_2 spec
      course_2.course_name = "Sciences";
      course_2.course_code = "212";

      //course_3 spec
      course_3.course_name = "Economics";
      course_3.course_code = "210";



       Student student_1, student_2, student_3;

       // student_1 specification
       strcpy( student_1.name, "Martin Nelson");
       strcpy(student_1.reg_number, "SCT212-001/2022");
       student_1.age = 20;
       student_1.course =course_1;


       // student_2 specification
       strcpy( student_2.name, "Leo duke");
       strcpy(student_2.reg_number, "SCT212-002/2022");
       student_2.age = 20;
       student_2.course =course_2;

       // student_3 specification
       strcpy( student_3.name, "Barrack Juma");
       strcpy(student_3.reg_number, "SCT212-003/2022");
       student_3.age = 20;
       student_3.course =course_3;


       assignGrade(student_1, 85);
       assignGrade(student_2, 64);
       assignGrade(student_3, 43);

       printStudentInfo(&student_1);
       printStudentInfo(&student_2);
       printStudentInfo(&student_3);


       return 0;

}


