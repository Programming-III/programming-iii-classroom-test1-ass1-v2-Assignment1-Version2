# Educational Learning Portal System

## Course Information
**German International University**  
**Faculty of Informatics and Computer Science**  
**Dr. Nada Sharaf**  
**Programming III – Winter Semester 2025/2026**  
**In-lab Assignment 01**

---

## General Description

In this project, you are tasked with implementing a simple **Educational Learning Portal System** as a console application. The system simulates how students enroll in courses, view grades, and track their progress. 

The purpose of this assignment is to practice some **Object-Oriented Programming (OOP)** concepts. This assignment focuses on the structure of the system. Full functionality (grading, detailed reports, and performance analytics) will be implemented in **In-lab Assignment 02**.

---

## Milestone 01: Required Classes and Methods

### a) Person Class

Represents a general person in the system. This class will serve as the base class for `Student` and `Instructor`.

#### Attributes (all private):
- `string name`
- `int id`

#### Methods:
- `display()`: Displays the person's name and ID (no virtual functions required)

#### Subclasses (inherit from Person):

**Student:** Adds
- `int yearLevel`
- `string major`

**Instructor:** Adds
- `string department`
- `int experienceYears`

---

### b) Course Class

Represents a course that can be taken by students and taught by instructors.

#### Attributes (all private):
- `string courseCode`
- `string courseName`
- `int maxStudents`
- `Student* students` — dynamically allocated array of Student objects

#### Methods:
- `addStudent(Student s)`: Adds a student to the array if capacity allows
- `displayCourseInfo()`: Displays course name, code, and all enrolled students

#### Example Dynamic Allocation:
```cpp
students = new Student[maxStudents];
```

---

### c) Portal Class

Represents the main educational portal that manages students, instructors, and courses.

#### Attributes:
- `Course* courses` — dynamic array of courses
- `Student* students` — dynamic array of students
- `Instructor* instructors` — dynamic array of instructors

#### Methods:
- `initializePortal()`: Dynamically creates a few courses, students, and instructors
- `enrollStudentInCourse(Student s, Course c)`: Enrolls a student in a specific course
- `displayPortalInfo()`: Displays all current courses, students, and their relationships

---

## Deliverables

You must include:

1. **Header files** for each of the above classes
2. A single **source file** (`main.cpp`) containing all implementations
3. A `main()` function that:
   - Initializes the portal
   - Dynamically adds a few students and instructors
   - Enrolls students in courses
   - Displays the portal's full information (students, instructors, and courses)
4. Include your name in the file `yourInformation.txt` using the following format:
```
   TutorialNumber_StudentID_StudentName
```
   **Example:** `T2_16007163_Ahmed Mohamed`

---

## ⚠️ Important Notes

- **Cheating = 0 in the assignment**
- **AI-generated code = 0 in the project**
- Each class must have:
  - A default constructor
  - A parameterized constructor
  - A destructor (even if empty)
- Arrays and objects must be **dynamically allocated** using single pointers, e.g.:
```cpp
  Student* students = new Student[maxStudents];
```

---

## 📋 Example Console Output
```
Educational Portal initialized successfully.

Course: CS101 - Introduction to Programming
Max Students: 3
Currently Enrolled: Omar Nabil (ID: 2202)

Instructor Info:
Name: Dr. Lina Khaled
Department: Computer Science
Experience: 5 years

Student Info:
Name: Omar Nabil
Year: 2
Major: Informatics
```

---

## Project Structure
```
project/
│
├── Person.h
├── Student.h
├── Instructor.h
├── Course.h
├── Portal.h
├── main.cpp
└── yourInformation.txt
```

---

## Getting Started

1. Create header files for each class (`Person.h`, `Student.h`, `Instructor.h`, `Course.h`, `Portal.h`)
2. Implement all class methods in `main.cpp`
3. Write the `main()` function to test your implementation
4. Create `yourInformation.txt` with your details
5. Compile and run your program

---

## Compilation
```bash
g++ main.cpp -o portal
./portal
```

---

## Good Luck! 🎓
