#pragma once
#include <string>
#include <vector>
#include "Person.h"

class Course {
	std::string mName;
	std::string mDescription;
public:
	Course(std::string name, std::string description);
};

class CourseSections {
	Course mCourse;
	Teacher mTeacher;
	std::vector<Student> mStudents;

public:
	CourseSections(Course course, Teacher teacher, std::vector<Student> students);
};
