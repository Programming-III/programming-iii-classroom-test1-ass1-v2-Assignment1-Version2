#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;

public:
    // Default constructor
    Person();
    
    // Parameterized constructor
    Person(string n, int i);
    
    // Destructor
    ~Person();
    
    // Setters
    void setName(string n);
    void setId(int i);
    
    // Getters
    string getName() const;
    int getId() const;
    
    // Display method
    virtual void display() const;
};

#endif
