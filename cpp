#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Course {
private:
    std::string name;
public:
    Course(const std::string& courseName) : name(courseName) {}

    std::string getName() const {
        return name;
    }
};

class Student {
private:
    std::string name;
    std::vector<int> grades;
public:
    Student(const std::string& studentName) : name(studentName) {}

    std::string getName() const {
        return name;
    }

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    double calculateAverage() const {
        int sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return static_cast<double>(sum) / grades.size();
    }

    const std::vector<int>& getGrades() const {
        return grades;
    }
};

class GradeBook {
private:
    std::vector<Student> students;
    std::vector<Course> courses;
public:
    void addStudent(const std::string& studentName) {
        students.emplace_back(studentName);
    }

    void addCourse(const std::string& courseName) {
        courses.emplace_back(courseName);
    }

    void recordGrade(const std::string& studentName, const std::string& courseName, int grade) {
        for (Student& student : students) {
            if (student.getName() == studentName) {
                student.addGrade(grade);
                break;
            }
        }
    }

    void generateReport() const {
        std::vector<std::string> processedCourses;

        for (const Student& student : students) {
            std::cout << "Student: " << student.getName() << std::endl;
            for (const Course& course : courses) {
                std::cout << "Course: " << course.getName() << ", Grades: ";
                bool hasGrades = false;
                for (int grade : student.getGrades()) {
                    if (course.getName() == course.getName()) {
                        std::cout << grade << " ";
                        hasGrades = true;
                    }
                }
                if (!hasGrades) {
                    std::cout << "N/A";
                }
                std::cout << std::endl;

                if (hasGrades && std::find(processedCourses.begin(), processedCourses.end(), course.getName()) == processedCourses.end()) {
                    processedCourses.push_back(course.getName());
                    break;
                }
            }
            std::cout << "Average: " << student.calculateAverage() << std::endl;
            std:: cout << std::endl;
        }
    }
};

void displayMenu() {
    std::cout << "=== Gradebook Menu ===" << std::endl;
    std::cout << "1. Add student" << std::endl;
    std::cout << "2. Add course" << std::endl;
    std::cout << "3. Record grade" << std::endl;
    std::cout << "4. Generate report" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "Enter your choice: ";
}

int getIntegerInput() {
    int value;
    while (!(std::cin >> value)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid integer: ";
    }
    return value;
}

int main() {
    GradeBook gradeBook;

    int choice;
    std::string studentName, courseName;
    int grade;

    while (true) {
        displayMenu();
        choice = getIntegerInput();

        switch (choice) {
            case 1:
                std::cout << "Enter student name: ";
                std::cin >> studentName;
                gradeBook.addStudent(studentName);
                std::cout << "Student added successfully!" << std::endl;
                break;
            case 2:
                std::cout << "Enter course name: ";
                std::cin >> courseName;
                gradeBook.addCourse(courseName);
                std::cout << "Course added successfully!" << std::endl;
                break;
            case 3:
                std::cout << "Enter student name: ";
                std::cin >> studentName;
                std::cout << "Enter course name: ";
                std::cin >> courseName;
                std::cout << "Enter grade: ";
                grade = getIntegerInput();
                gradeBook.recordGrade(studentName, courseName, grade);
                std::cout << "Grade recorded successfully!" << std::endl;
                break;
            case 4:
                std::cout << "=== Grade Report ===" << std::endl;
                gradeBook.generateReport();
                std::cout << "====================" << std::endl;
                break;
            case 5:
                std::cout << "Exiting program..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
