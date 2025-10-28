#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int yearLevel;
    string major;

public:
    // Default constructor
    Student();
    
    // Parameterized constructor
    Student(string n, int i, int year, string maj);
    
    // Destructor
    ~Student();
    
    // Setters
    void setYearLevel(int year);
    void setMajor(string maj);
    
    // Getters
    int getYearLevel() const;
    string getMajor() const;
    
    // Override display method
    void display() const override;
};

#endif
