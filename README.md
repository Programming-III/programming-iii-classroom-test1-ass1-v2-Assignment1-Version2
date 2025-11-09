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
