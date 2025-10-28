#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Portal.h"

using namespace std;

// ==================== Person Class Implementation ===================
Person::Person() : name(""), id(0) {}

Person::Person(string n, int i) : name(n), id(i) {}

Person::~Person() {}

void Person::setName(string n) {
    name = n;
}

void Person::setId(int i) {
    id = i;
}

string Person::getName() const {
    return name;
}

int Person::getId() const {
    return id;
}

void Person::display() const {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}

// ==================== Student Class Implementation ====================
Student::Student() : Person(), yearLevel(0), major("") {}

Student::Student(string n, int i, int year, string maj) 
    : Person(n, i), yearLevel(year), major(maj) {}

Student::~Student() {}

void Student::setYearLevel(int year) {
    yearLevel = year;
}

void Student::setMajor(string maj) {
    major = maj;
}

int Student::getYearLevel() const {
    return yearLevel;
}

string Student::getMajor() const {
    return major;
}

void Student::display() const {
    cout << "Student Info:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Year: " << yearLevel << endl;
    cout << "Major: " << major << endl;
}

// ==================== Instructor Class Implementation ====================
Instructor::Instructor() : Person(), department(""), experienceYears(0) {}

Instructor::Instructor(string n, int i, string dept, int exp) 
    : Person(n, i), department(dept), experienceYears(exp) {}

Instructor::~Instructor() {}

void Instructor::setDepartment(string dept) {
    department = dept;
}

void Instructor::setExperienceYears(int exp) {
    experienceYears = exp;
}

string Instructor::getDepartment() const {
    return department;
}

int Instructor::getExperienceYears() const {
    return experienceYears;
}

void Instructor::display() const {
    cout << "Instructor Info:" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceYears << " years" << endl;
}

// ==================== Course Class Implementation ====================
Course::Course() : courseCode(""), courseName(""), maxStudents(0), 
                   enrolledStudents(nullptr), currentStudentCount(0) {}

Course::Course(string code, string name, int max) 
    : courseCode(code), courseName(name), maxStudents(max), currentStudentCount(0) {
    enrolledStudents = new Student*[maxStudents];
    for (int i = 0; i < maxStudents; i++) {
        enrolledStudents[i] = nullptr;
    }
}

Course::~Course() {
    if (enrolledStudents != nullptr) {
        delete[] enrolledStudents;
    }
}

void Course::setCourseCode(string code) {
    courseCode = code;
}

void Course::setCourseName(string name) {
    courseName = name;
}

void Course::setMaxStudents(int max) {
    maxStudents = max;
}

string Course::getCourseCode() const {
    return courseCode;
}

string Course::getCourseName() const {
    return courseName;
}

int Course::getMaxStudents() const {
    return maxStudents;
}

int Course::getCurrentStudentCount() const {
    return currentStudentCount;
}

bool Course::addStudent(Student* s) {
    if (currentStudentCount >= maxStudents) {
        cout << "Course is full. Cannot enroll more students." << endl;
        return false;
    }
    enrolledStudents[currentStudentCount] = s;
    currentStudentCount++;
    return true;
}

void Course::displayCourseInfo() const {
    cout << "Course: " << courseCode << " - " << courseName << endl;
    cout << "Max Students: " << maxStudents << endl;
    cout << "Currently Enrolled:" << endl;
    
    if (currentStudentCount == 0) {
        cout << " No students enrolled yet." << endl;
    } else {
        for (int i = 0; i < currentStudentCount; i++) {
            cout << " " << enrolledStudents[i]->getName() 
                 << " (ID: " << enrolledStudents[i]->getId() << ")" << endl;
        }
    }
}

// ==================== Portal Class Implementation ====================
Portal::Portal() : students(nullptr), instructors(nullptr), courses(nullptr),
                   studentCount(0), instructorCount(0), courseCount(0),
                   studentCapacity(10), instructorCapacity(10), courseCapacity(10) {
    students = new Student*[studentCapacity];
    instructors = new Instructor*[instructorCapacity];
    courses = new Course*[courseCapacity];
    
    for (int i = 0; i < studentCapacity; i++) students[i] = nullptr;
    for (int i = 0; i < instructorCapacity; i++) instructors[i] = nullptr;
    for (int i = 0; i < courseCapacity; i++) courses[i] = nullptr;
}

Portal::Portal(int studCap, int instCap, int courCap) 
    : studentCount(0), instructorCount(0), courseCount(0),
      studentCapacity(studCap), instructorCapacity(instCap), courseCapacity(courCap) {
    students = new Student*[studentCapacity];
    instructors = new Instructor*[instructorCapacity];
    courses = new Course*[courseCapacity];
    
    for (int i = 0; i < studentCapacity; i++) students[i] = nullptr;
    for (int i = 0; i < instructorCapacity; i++) instructors[i] = nullptr;
    for (int i = 0; i < courseCapacity; i++) courses[i] = nullptr;
}

Portal::~Portal() {
    // Delete all students
    for (int i = 0; i < studentCount; i++) {
        delete students[i];
    }
    delete[] students;
    
    // Delete all instructors
    for (int i = 0; i < instructorCount; i++) {
        delete instructors[i];
    }
    delete[] instructors;
    
    // Delete all courses
    for (int i = 0; i < courseCount; i++) {
        delete courses[i];
    }
    delete[] courses;
}

void Portal::initializePortal() {
    cout << "Educational Portal initialized successfully." << endl << endl;
}

bool Portal::addStudent(Student* s) {
    if (studentCount >= studentCapacity) {
        cout << "Student capacity reached." << endl;
        return false;
    }
    students[studentCount] = s;
    studentCount++;
    return true;
}

bool Portal::addInstructor(Instructor* i) {
    if (instructorCount >= instructorCapacity) {
        cout << "Instructor capacity reached." << endl;
        return false;
    }
    instructors[instructorCount] = i;
    instructorCount++;
    return true;
}

bool Portal::addCourse(Course* c) {
    if (courseCount >= courseCapacity) {
        cout << "Course capacity reached." << endl;
        return false;
    }
    courses[courseCount] = c;
    courseCount++;
    return true;
}

bool Portal::enrollStudentInCourse(Student* s, Course* c) {
    return c->addStudent(s);
}

void Portal::displayPortalInfo() const {
    // Display all courses
    for (int i = 0; i < courseCount; i++) {
        courses[i]->displayCourseInfo();
        cout << endl;
    }
    
    // Display all instructors
    for (int i = 0; i < instructorCount; i++) {
        instructors[i]->display();
        cout << endl;
    }
    
    // Display all students
    for (int i = 0; i < studentCount; i++) {
        students[i]->display();
        cout << endl;
    }
}

int Portal::getStudentCount() const {
    return studentCount;
}

int Portal::getInstructorCount() const {
    return instructorCount;
}

int Portal::getCourseCount() const {
    return courseCount;
}

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
