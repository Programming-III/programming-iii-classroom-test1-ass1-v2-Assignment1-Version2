#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Portal.h"

using namespace std;

// ==================== Person Class Implementation =========================

// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================






// ==================== Portal Class Implementation ====================







// ==================== Main Function ====================
int main() {
    // Create portal
    Portal* portal = new Portal(20, 10, 15);
    
    // Initialize portal
    portal->initializePortal();
    
    // Create courses dynamically
    Course* cs101 = new Course("CS101", "Introduction to Programming", 3);
    portal->addCourse(cs101);
    
    // Create students dynamically
    Student* omar = new Student("Omar Nabil", 2202, 2, "Informatics");
    portal->addStudent(omar);
    
    // Create instructors dynamically
    Instructor* lina = new Instructor("Dr. Lina Khaled", 1001, "Computer Science", 5);
    portal->addInstructor(lina);
    
    // Enroll students in courses
    portal->enrollStudentInCourse(omar, cs101);
    
    // Display portal information
    portal->displayPortalInfo();
    
    // Clean up
    delete portal;
    
    return 0;
}
