#ifndef PROJECT_2_COURSE_H
#define PROJECT_2_COURSE_H

#include <string>
#include <vector>

class Course {
    // private fields for a course object.
private:
    std::string courseId;
    std::string courseName;
    std::vector<std::string> coursePrerequisites;
    // public methods for a course object.
public:
    Course() = default;
    Course(std::string& id, std::string& name, std::vector<std::string>& prerequisites);
    std::string getCourseId() const;
    std::string getCourseName() const;
    std::vector<std::string> getCoursePrerequisites() const;
    std::string courseToString() const;

    // Validation for course data
    bool isValid() const;

    // Equality operator for comparing courses
    bool operator==(const Course& other) const;
};

#endif //PROJECT_2_COURSE_H
