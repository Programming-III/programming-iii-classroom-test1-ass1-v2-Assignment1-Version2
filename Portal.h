#ifndef PORTAL_H
#define PORTAL_H

#include "Student.h"
#include "Instructor.h"
#include "Course.h"

class Portal {
private:
    Student** students;
    Instructor** instructors;
    Course** courses;
    int studentCount;
    int instructorCount;
    int courseCount;
    int studentCapacity;
    int instructorCapacity;
    int courseCapacity;

public:
    // Default constructor
    Portal();
    
    // Parameterized constructor
    Portal(int studCap, int instCap, int courCap);
    
    // Destructor
    ~Portal();
    
    // Methods
    void initializePortal();
    bool enrollStudentInCourse(Student* s, Course* c);
    void displayPortalInfo() const;
    
    // Helper methods to add entities
    bool addStudent(Student* s);
    bool addInstructor(Instructor* i);
    bool addCourse(Course* c);
    
    // Getters
    int getStudentCount() const;
    int getInstructorCount() const;
    int getCourseCount() const;
};

#endif
