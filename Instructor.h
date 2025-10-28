#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    // Default constructor
    Instructor();
    
    // Parameterized constructor
    Instructor(string n, int i, string dept, int exp);
    
    // Destructor
    ~Instructor();
    
    // Setters
    void setDepartment(string dept);
    void setExperienceYears(int exp);
    
    // Getters
    string getDepartment() const;
    int getExperienceYears() const;
    
    // Override display method
    void display() const override;
};

#endif
