#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student** enrolledStudents;
    int currentStudentCount;

public:
    // Default constructor
    Course();
    
    // Parameterized constructor
    Course(string code, string name, int max);
    
    // Destructor
    ~Course();
    
    // Setters
    void setCourseCode(string code);
    void setCourseName(string name);
    void setMaxStudents(int max);
    
    // Getters
    string getCourseCode() const;
    string getCourseName() const;
    int getMaxStudents() const;
    int getCurrentStudentCount() const;
    
    // Methods
    bool addStudent(Student* s);
    void displayCourseInfo() const;
};

#endif
