📚 Educational Learning Portal System

Programming III – In-lab Assignment 01
German International University — Faculty of Informatics and Computer Science
Winter Semester 2025/2026
Dr. Nada Sharaf

📌 Project Description

This project implements a simple Educational Learning Portal System using C++.
The application simulates how students enroll in courses, view basic course info, and track their enrollment.

This assignment focuses on Object-Oriented Programming (OOP) concepts:

Classes

Inheritance

Dynamic allocation

Composition (Portal contains courses, students, instructors)

✅ Full functionality (grading, reports, analytics) will be completed in In-lab Assignment 02.

🏗️ System Architecture
1. Person Class (Base Class)

Represents a general person in the system.

Attribute (private)	Type
name	string
id	int

✅ Methods:

display() → prints name and ID.

➡️ Used as a base class for Student and Instructor.

2. Student Class (inherits from Person)
Attribute (private)	Type
yearLevel	int
major	string
3. Instructor Class (inherits from Person)
Attribute (private)	Type
department	string
experienceYears	int
4. Course Class

Represents a course that students can enroll in.

Attribute (private)	Type
courseCode	string
courseName	string
maxStudents	int
students	Student* (dynamically allocated array)

✅ Methods:

addStudent(Student s)

displayCourseInfo()

Uses dynamic allocation:
students = new Student[maxStudents];

5. Portal Class

Represents the whole portal system managing all entities.

Attribute	Type
courses	Course*
students	Student*
instructors	Instructor*

✅ Methods:

initializePortal()

enrollStudentInCourse(Student s, Course c)

displayPortalInfo()

🧪 Required in main()

Initialize the portal

Dynamically add students and instructors

Enroll students in courses

Display full portal information

📁 Project Structure
/project
│
├── Person.h
├── Student.h
├── Instructor.h
├── Course.h
├── Portal.h
├── main.cpp          // contains all implementations
└── yourInformation.txt

✅ Deliverables Checklist
Requirement	Status
Person, Student, Instructor, Course, Portal classes	✅
Header files + single main.cpp implementation	✅
Constructors, destructors for all classes	✅
Dynamic allocation using pointers (new)	✅
yourInformation.txt created with required format	✅
⚠️ Important Rules

❌ Copying or cheating results in zero (0).

❌ AI-generated code = 0 in the assignment (Use AI only for clarification or documentation — not code).

✅ Each class must have:

Default constructor

Parameterized constructor

Destructor

🖥️ Example Output
Educational Portal initialized successfully.

Course: CS101 - Introduction to Programming
Max Students: 3
Currently Enrolled:
   Omar Nabil (ID: 2202)

Instructor Info:
Name: Dr. Lina Khaled
Department: Computer Science
Experience: 5 years

Student Info:
Name: Omar Nabil
Year: 2
Major: Informatics

✍️ yourInformation.txt format:
TutorialNumber_StudentID_StudentName


Example:

T2_16007163_Ahmed Mohamed
