# Programming III – Assignment 01: Educational Learning Portal System

## Course Information

**Institution:** German International University  
**Faculty:** Faculty of Informatics and Computer Science  
**Instructor:** Dr. Nada Sharaf  
**Course:** Programming III  
**Semester:** Winter Semester 2025/2026



## General Description

In this project, you are required to implement a simple Educational Learning Portal System as a console-based application. The system models how students and instructors interact with courses in an educational environment.

The main goal of this milestone is to practice fundamental Object-Oriented Programming (OOP) concepts such as classes, constructors, destructors, encapsulation, and dynamic memory allocation.

In this phase, you will build the basic class structure of the system. The complete functionality and relationships between components will be implemented later in Milestone 2 (Assignment).



## Milestone 01: Required Classes and Methods

### a) Person Class

This class represents a general person within the system. It will serve as a base class for both Student and Instructor.

**Private Attributes:**
- `string name` — stores the person's full name
- `int id` — stores a unique identifier for the person

**Methods:**
- `display()` — prints the person's name and ID

**Subclasses (inherit from Person):**

#### 1. Student Class

Represents a student in the system. Inherits from Person and adds the following attributes:
- `int yearLevel` — student's current academic year
- `string major` — student's field of study

#### 2. Instructor Class

Represents an instructor in the system. Inherits from Person and adds the following attributes:
- `string department` — instructor's department name
- `int experienceYears` — number of years of teaching experience

---

### b) Course Class

This class represents a course offered in the system. Each course can have a limited number of students enrolled.

**Private Attributes:**
- `string courseCode` — unique course identifier (e.g., "CS101")
- `string courseName` — course title (e.g., "Introduction to Programming")
- `int maxStudents` — maximum number of students allowed in the course
- `Student* students` — dynamically allocated array of Student objects
- `int currentStudents` — keeps track of the number of currently enrolled students

**Methods:**
- `addStudent(const Student& s)` — adds a new student to the course by constant reference if there is available capacity
- `displayCourseInfo()` — displays the course's information and all enrolled students


## You must include:

1. **Header files** for each of the following classes:
   - Person
   - Student
   - Instructor
   - Course

2. **A single source file (main.cpp)** containing:
   - All class implementations
   - A `main()` function that demonstrates:
     - Creating objects of Student, Instructor, and Course
     - Adding students to a course
     - Displaying the course and person information

3. **A text file named yourInformation.txt** containing:
```
   TutorialNumber_StudentID_StudentName
```
   
   **Example:**
```
   T2_16007163_Ahmed Mohamed
```

---

## Important Notes

- **Cheating = 0 in the assignment**
- **AI-generated code = 0 in the project**
- Each class must include:
  - A default constructor
  - A parameterized constructor
  - A destructor (even if empty)
  - **All attributes must be private, and data access must be controlled through setter and getter methods.**
 
## Example Console Output


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

