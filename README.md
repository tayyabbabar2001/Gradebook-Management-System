# Gradebook-Management-System
The Gradebook Management System is a C++ program designed to manage and generate reports for student grades in various courses. It allows users to add students, add courses, record grades, and generate a comprehensive report displaying students' grades, courses, and averages.


**Features:**

Student and Course Management: Users can add students and courses to the gradebook system.

Grade Recording: Users can record grades for students in specific courses.

Grade Calculation: The system calculates the average grade for each student based on the recorded grades.

Report Generation: Users can generate a report displaying each student's name, grades for each course, and their average grade.

**How to Use:**

Run the program.
Select an option from the menu by entering the corresponding number.
Option 1: Add a student by entering the student's name.
Option 2: Add a course by entering the course's name.
Option 3: Record a grade by entering the student's name, course name, and grade.
Option 4: Generate a grade report displaying each student's grades and averages.
Option 5: Exit the program.
Follow the instructions to add students, courses, record grades, and generate reports.
**Note:**

The program uses vectors to store student and course information, allowing dynamic management of data.
The program provides input validation for integer inputs and handles invalid inputs gracefully.
The program calculates the average grade for each student using the recorded grades.

**Code Explanation:**
Constructors are used in the Course, Student, and GradeBook classes. They are responsible for initializing the member variables when creating objects of these classes. 
The GradeBook class represents a grade book and manages students and courses. It has private member variables students and courses, which are vectors to store collections of Student and Course objects, respectively. The GradeBook class also provides several public member functions, such as addStudent(), addCourse(), recordGrade(), and generateReport(), to perform operations related to managing student grades. 
•	This code defines the Course class. It has a private member variable name of type std::string to store the course name. The class has a constructor that takes a courseName parameter and initializes the name member. It also provides a public member function getName() that returns the course name. 
•	This code defines the Student class. It has a private member variable name of type std::string to store the student name, and a private member variable grades of type std::vector<int> to store the student's grades. 
•	The class has a constructor that takes a studentName parameter and initializes the name member. 
•	It provides public member functions such as getName() to get the student name, addGrade() to add a grade to the student's list of grades, calculateAverage() to calculate the average of the student's grades, and getGrades() to retrieve the vector of grades. 
•	This code defines the GradeBook class. It has private member variables students and courses, which are vectors to store the collection of students and courses, respectively. 
•	The class provides public member functions such as addStudent() to add a new student, addCourse() to add a new course, recordGrade() to record a grade for a student in a particular course, and generateReport() to generate a report showing each student's courses, grades, and average. 
•	The generateReport() function iterates over the students and courses, and for each student, it prints their name, the courses they are enrolled in, their grades, and their average. 
•	This function displayMenu() is used to show the menu options to the user. It prints the available options on the screen.

