#pragma once
#include "main.h"
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
	vector<Student> mStudents;

public:
	CourseSections(Course course, Teacher teacher, vector<Student> students);
};
